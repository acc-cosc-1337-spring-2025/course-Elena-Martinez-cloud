//h

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H
//Create a class that inherits from TicTacToe.


class TicTacToe4: public TicTacToe 
{
    public:
    //Create an initializer to initialize TicTacToe with a value of 4.
    TicTacToe4() : TicTacToe(4) {}

    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    private:
    bool check_column_win () override;
    bool check_row_win () override;
    bool check_diagonal_win () override;
};






#endif

