//cpp

#include "tic_tac_toe.h"
using std::cout;

bool TicTacToe::game_over()
{    
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
	
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
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
        player = "Y";
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