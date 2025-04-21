//h tic_tac_toe_3
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H


//Create a class that inherits from TicTacToe
class TicTacToe3: public TicTacToe 
{
    //Create a default constructor (no parameters).
    //a. Create an initializer to initialize TicTacToe with a value of 3.
       //Example: DeriveConstructor(): BaseConstructor(3){}
    
    public:
    TicTacToe3() : TicTacToe(3) {}


    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    private:
    bool check_column_win () override;
    bool check_row_win () override;
    bool check_diagonal_win () override;
    bool game_over () override;

};

#endif
