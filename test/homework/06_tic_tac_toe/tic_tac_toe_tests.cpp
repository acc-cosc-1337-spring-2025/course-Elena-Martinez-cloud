#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over class function")
{
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3> ();
	game->start_game("X");
	REQUIRE(game->game_over() == false);
}


TEST_CASE("Test row win for TicTacToe3")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(1);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	game->display_board();
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test row win for TicTacToe4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(1);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	game->display_board();
	REQUIRE(game->game_over() == true);
}

/*
TEST_CASE("Test if the board is full")
{
	TicTacToe game;
	game.start_game("x");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test First player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}
*/

TEST_CASE("Test win by first column for TicTacToe3")
{
	TicTacToeManager manager;

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == true);

	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
	manager.save_game(move(game));

}

TEST_CASE("Test win by first column for TicTacToe4")
{
	TicTacToeManager manager;

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == true);

	REQUIRE((game->get_winner() == "X" || game->get_winner() == "O"));
	manager.save_game(move(game));

}


TEST_CASE("Test win by second column TicTacToe3")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(2);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	game->display_board();
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column TicTacToe4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(2);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	game->display_board();
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	game->display_board();
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test TicTacToe3 win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test TicTacToe4 win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe3 Test win by third row ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("TicTacToe4 Test win by forth row ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test tictactoe3 win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test tictactoe4 win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test TicTacToe3 win diagonally from top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test TicTacToe4 win diagonally from top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test TicTacToe3 win diagonally from bottom left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3> ();
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test TicTacToe4 win diagonally from bottom left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4> ();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == true);
}
/*
TEST_CASE("Test TicTacToe manager get winner total function")
{
	TicTacToeManager manager;

	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");
	manager.save_game(game);

	TicTacToe game2;
	game2.start_game("O");
	game2.mark_board(1);
	game2.mark_board(2);
	game2.mark_board(5);
	game2.mark_board(4);
	game2.mark_board(9);

	REQUIRE(game2.game_over() == true);
	REQUIRE(game2.get_winner() == "O");
	manager.save_game(game2);

	TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(3);
	game3.mark_board(5);
	game3.mark_board(4);
	game3.mark_board(6);
	game3.mark_board(8);
	game3.mark_board(7);
	game3.mark_board(9);
	REQUIRE(game3.game_over() == true);
	REQUIRE(game3.get_winner() == "C");
	manager.save_game(game3);

	//get total tally
	int o, x, c;
	manager.get_winner_total(o,x,c);
	REQUIRE(x==1);
	REQUIRE(o==1);
	REQUIRE(c==1);

}

*/