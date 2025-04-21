//cpp

#include "tic_tac_toe_manager.h"
//Change save_game TicTacToe parameter to a unique_ptr of TicTacToe reference.
    //a.  In save_game make sure update_winner_count is the first statement (Use -> instead of for get_winner).

void TicTacToeManager::save_game(unique_ptr<TicTacToe> game)
{
    update_winner_count(game -> get_winner());
    games.push_back(move(game));
}

void TicTacToeManager::get_winner_total(int& X, int& O, int& C)
{
    X = x_win;
    O = o_win;
    C = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    } 
    else if (winner == "O") {
        o_win++;
    }
    else if (winner == "C")
    {
        ties++;
    }

}

//Add a display function to display all the games played.
//a. Add a reference to the loop auto& game, unique pointers must be referenced..
//b. Account for dereferencing pointers in the loop block, change game to *game.
void TicTacToeManager::display_games()
{
    for (auto& game : games)
    {
        game -> display_board ();
    } 
}
