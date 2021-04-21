#include <iostream>
#include"tic_tac_toe.h"
#include<limits>
#include"tic_tac_toe_manager.h"



using std::cout;
using std::cin;

int main() 
{
	TicTacToeManager manager;
	std::string player;

	char option;
	do 
	{
		TicTacToe tic_tac_toe;
		while(player != "X" && player != "x" && player != "O" && player !="o")
		{
			cout<"Please choose X or O for your player: ";

			do 
			{
				cin >> tic_tac_toe;
				cout << tic_tac_toe;
			}while (tic_tac_toe.game_over() == false);

			player = "";
			cout<< "Game over!!";
			cout<< "\n The winner is: "<<tic_tac_toe.get_winner()<<"\n";

			manager.save_game(tic_tac_toe);

			int x_wins;
			int o_wins;
			int ties;
			manager.get_winner_total(x_wins, o_wins, ties);

			cout<< "X wins: "<<x_wins<<"\n";
			cout<< "O wins: "<<o_wins<<"\n";
			cout<< "Ties: "<<ties<<"\n";

			cout<<"Enter y or Y to continue: ";
			cin>>option;

		}while (option == 'Y' || option == 'y');

		cout<<manager;
		return 0;
	}