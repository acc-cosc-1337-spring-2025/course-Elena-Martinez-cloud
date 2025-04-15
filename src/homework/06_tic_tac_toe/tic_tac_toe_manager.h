//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
using namespace std;
using std::vector;


class TicTacToeManager
{
    public: 
        void save_game (TicTacToe b);
        void get_winner_total(int& o, int& w, int&c);

    private:
        vector<TicTacToe>games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner);

};

#endif