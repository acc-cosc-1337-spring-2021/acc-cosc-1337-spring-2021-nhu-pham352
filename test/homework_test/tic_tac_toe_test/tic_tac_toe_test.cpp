#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"


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
	game.start_game("X");
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
	REQUIRE (game.game_over() == "X");

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
TEST_CASE("test get winner class function")
{
    TicTacToeManager manager;
    TicTacToe game;

    // Tie
    game.start_game("X");
    game.mark_board(1);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(2);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(3);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(6);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//x
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
    manager.save_game(game);

    //X Wins Third Row
    game.start_game("X");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//x
    //x wins
    REQUIRE(game.game_over() == "X");
    manager.save_game(game);

    // O Wins Third row
    game.start_game("O");
    REQUIRE(game.game_over() == false);
    game.mark_board(7);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(4);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(8);//o
    REQUIRE(game.game_over() == false);
    game.mark_board(5);//x
    REQUIRE(game.game_over() == false);
    game.mark_board(9);//o
    //O wins
    REQUIRE(game.game_over() == "O");
    manager.save_game(game);

    int x, o, t;
    manager.get_winner_total(o,x,t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}





