//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
using namespace std;
using std::vector;
using std::unique_ptr;


class TicTacToeManager
{
    public: 
        void save_game (unique_ptr<TicTacToe> game);
        void get_winner_total(int& o, int& w, int&c);
        void display_games();

    private:
    //Change the games vector to a vector of unique ptr to TicTacToe
        vector<unique_ptr<TicTacToe>> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner);

};

#endif