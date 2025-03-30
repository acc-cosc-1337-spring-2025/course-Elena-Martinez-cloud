//h
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;
using std::vector;

class TicTacToe{
    public:
        bool game_over();	
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const {return player;}
        void display_board() const;
    private:
        string player;
        vector<string> pegs{9, ""};
        void clear_board();
        void set_next_player();
        bool check_board_full();

};

#endif