//h tictactoe
#include <iostream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;
using std::vector;


class TicTacToe{
    public:
        virtual bool game_over();	
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const {return player;}
        void display_board() const;
        string get_winner () const {return winner;}
        //TicTacToe() : pegs(9, " ") {}
        TicTacToe(int size): pegs(size * size, " "){}
        int board_size() const;
        void set_winner(string winner1);
        int player_board_size();
        

    private:
        string player;
        void clear_board();
        void set_next_player();
        bool check_board_full();
        string winner;

    protected:
        vector<string> pegs;
        virtual bool check_column_win ();
        virtual bool check_row_win ();
        virtual bool check_diagonal_win ();
        


};

#endif