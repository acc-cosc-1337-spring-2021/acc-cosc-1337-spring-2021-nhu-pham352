//h
#include"tic_tac_toe.h"
#include<string>
#include<vector>
#include<iostream>

#ifndef Tic_Tac_Toe_Manager
#define Tic_Tac_Toe_Manrger

class TicTacToeManager
{
    public:
        void save_game(TicTacToe b);
        void get_winner_total(int& o, int& w, int& t);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        
    private:
        std::vector<TicTacToe> games;
        int x_wins{0};
        int o_wins{0};
        int ties{0};
        void update_winner_count (std::string winner);
    
};

#endif