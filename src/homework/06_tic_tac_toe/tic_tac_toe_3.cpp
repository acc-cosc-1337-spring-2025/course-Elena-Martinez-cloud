//cpp tictactoe3
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"


/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
{
    if (pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[0] !=" ")
    {
        set_winner(pegs[0]);
        return true;
    }

    if (pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[1] !=" ")
    {
        set_winner(pegs[1]);
        return true;
    }

    if (pegs[2] == pegs[5] && pegs[5] == pegs[8] && pegs[2] !=" ")
    {
        set_winner(pegs[2]);
        return true;
    }
    return false;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/


bool TicTacToe3::check_row_win()
{
    if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[0] !=" ")
    {
        set_winner(pegs[0]);
        return true;
    }

    if (pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[3] !=" ")
    {
        set_winner(pegs[3]);
        return true;
    }

    if (pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[6] !=" ")
    {
        set_winner(pegs[6]);
        return true;
    }
    return false;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool TicTacToe3::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] !=" ")
    {
        set_winner(pegs[0]);
        return true;
    }
    if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] !=" ")
    {
        set_winner(pegs[2]);
        return true;
    }
    return false;
}

bool TicTacToe3::game_over()
{
    if (check_row_win() || check_column_win() || check_diagonal_win())
    {
     return true;
    }
    return false;
}


