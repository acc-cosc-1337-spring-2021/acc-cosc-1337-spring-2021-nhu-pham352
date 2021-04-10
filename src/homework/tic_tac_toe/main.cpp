#include <iostream>
#include"tic_tac_toe.h"
#include<limits>


using std::cout;
using std::cin;

int main() 
{
	char play_again;
	TicTacToe game;
	std::string first_player;

	cout<<"Please enter either X or O to choose your player: \n";
	cin>>first_player;

	game.start_game(first_player);

	do

	{
		int position;
		cout<<"Please enter a position between 1 to 9: \n";
		cin>>position;

		game.mark_board(position);
		game.display_board();

		first_player = "";
		cout <<"Game Over!!" << "\n";
		cout << "The winner is " << game.get_winner() <<"\n";

		cout<<"Please input Y or y to play again: \n";
		cin>>play_again;
	}
	while (play_again == 'Y' || play_again == 'y');

		return 0;
}