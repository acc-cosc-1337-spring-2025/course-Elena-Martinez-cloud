#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;



int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout << "Enter first player (X or Y): ";
		cin >> first_player;

		game.start_game(first_player);

		int position;
		
		while (!game.game_over())
		{
			cout<<"Enter a position (1-9): ";
			cin>>position;

			while (position < 1 || position > 9)
			{
				cout << "Invalid position. Enter a number between 1 and 9: ";
				cin >> position;
			}
			game.mark_board(position);
			game.display_board();
		}

		cout << "Game Over! Player" << game.get_player()<< " wins or it's a draw. \n";
		cout << "Play again, enter y or Y? ";
		cin>>user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	

	return 0;
}