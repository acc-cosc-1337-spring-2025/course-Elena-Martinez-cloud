#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToeManager manager;
	unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = 'y';
	int choice;

	do
	{
		cout<< "Please choice 1 or 2: \n";
		cout<< "1 for TicTacToe 3\n";
		cout<< "2 for TicTacToe 4\n";
		cin>> choice;

		if (choice ==1)
		{
			game = make_unique<TicTacToe3>();
		} 
		else if (choice == 2)
		{
			game = make_unique<TicTacToe4>();
		} 
		else 
		{
			cout << "Wrong choice. Please choice 1 or 2";
			return 1;
		}

		
		cout << "Enter first player (X or O) or Q to quit: ";
		cin >> first_player;

		if (first_player == "q" || first_player == "Q")
		{
			cout << "See you next time!";
			break;
		}


		while (first_player != "X" && first_player != "O")
		{
			cout << "ERROR! Please enter X or O: ";
			cin >> first_player;

			if (first_player == "q" || first_player =="Q")
			{
				cout << "Thanks for playing.\n";
				break;
			}
		}

		if(first_player == "q" || first_player == "Q")
			break;

		game->start_game(first_player);

		int position;
		
		while (!game->game_over())
		{
			cout<<"Enter a position (1-" << game->player_board_size() << "): ";
			cin>>position;

			while (position < 1 || position > game->player_board_size())
			{
				cout << "Invalid position. Enter a number between 1 and" << game->player_board_size()<<": ";
				cin >> position;
			}
			game->mark_board(position);
			game->display_board();
		}

		string winner = game->get_winner();
		if (winner == "C")
		{
			cout << "It's a Tie!\n";
		}
		else
		{
			cout << "GAME OVER! Player "<< winner << " wins!\n";
		}

		manager.save_game(move(game));

		int x_win, o_win, ties;
		manager.get_winner_total(x_win, o_win, ties);

		cout << "\nScoreboard:\n";
		cout << "X wins: "<< x_win << "\n";
		cout << "O wins: "<< o_win << "\n";
		cout << "Ties: " << ties << "\n";


		cout << "Play again (enter y or Y) or would you like to Quit (enter q or Q)?: ";
		cin>>user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	

	return 0;
}