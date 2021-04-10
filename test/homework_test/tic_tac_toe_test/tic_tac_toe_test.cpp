#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests TicTacToe class functions")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test first column with X wins")
{
	TicTacToe game;
	game.start_game("0");
	REQUIRE (game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE (game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE (game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE (game.game_over() == false);
	game.mark_board(6); //O
	REQUIRE (game.game_over() == false);
	game.mark_board(7); //X wins
	REQUIRE (game.game_over() == true);

}

TEST_CASE ("Test X wins by second column")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by third column")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by first row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by second row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by third row")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins diagonal 1 5 9")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X wins 
	REQUIRE(game.game_over() == true);
}

TEST_CASE ("Test X wins by diagonal 3 5 7")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //X wins 
	REQUIRE(game.game_over() == true);
}





