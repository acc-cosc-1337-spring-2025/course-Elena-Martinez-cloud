//cpp tictactoe

#include "tic_tac_toe.h"
#include <cmath>
using std::cout;

bool TicTacToe::game_over()
{    
   if (check_row_win() || check_column_win() || check_diagonal_win())
   {
    return true;
   }
   
   if(check_board_full())
   {
    set_winner("C");
    return true;
   }

   return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
	
void TicTacToe::mark_board(int position)
{
    if (game_over())
    {
        return;
    }
    pegs[position-1] = player;
    //display_board();
    if (!game_over()) 
    {
        set_next_player();
    }
    
}

void TicTacToe::display_board() const
{
    int width = board_size(); 

    for (int i = 0; i < pegs.size(); i++)
    {
        cout << pegs[i];
        if ((i + 1) % width == 0)
        {
            cout << "\n";
        }
        else
        {
            cout << "|";
        }
    }
}
/*
void TicTacToe::display_board() const
{
    int row_length = board_size() == 9 ? 3 : 4;

    for (int i =0; i < pegs.size(); i += row_length)
    {
        for (int j=0; j < row_length; ++j)
        {
            cout << pegs[i+j];
            if (j < row_length-1)
            {
                cout << "|";
            }
        }
        cout << "\n";
    }
}
*/

// private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::set_winner(string winner1)
{
    winner=winner1;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

// new constructor for HW 9
int TicTacToe::board_size() const
{
    return static_cast<int>(sqrt(pegs.size()));
}

int TicTacToe::player_board_size()
{
    return pegs.size();
}
