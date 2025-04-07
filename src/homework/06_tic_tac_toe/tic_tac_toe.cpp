//cpp

#include "tic_tac_toe.h"
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
    pegs[position-1] = player;
    //display_board();
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (int i=0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

// private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = "";
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
        if(pegs[i] == "")
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
    if (pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[0] !="")
    {
        set_winner(pegs[0]);
        return true;
    }

    if (pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[1] !="")
    {
        set_winner(pegs[1]);
        return true;
    }

    if (pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[2] !="")
    {
        set_winner(pegs[2]);
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[0] !="")
    {
        set_winner(pegs[0]);
        return true;
    }

    if (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[3] !="")
    {
        set_winner(pegs[3]);
        return true;
    }

    if (pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[6] !="")
    {
        set_winner(pegs[6]);
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] !="")
    {
        set_winner(pegs[0]);
        return true;
    }
    if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] !="")
    {
        set_winner(pegs[2]);
        return true;
    }
    return false;
}

