//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game (TicTacToe b)
{
    update_winner_count(b.get_winner());
    games.push_back(b);

}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_wins ++;        
    }
    else if (winner == "O")
    {
        o_wins ++;
    }
    else
    {
        ties ++;
    }
    
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = x_wins;
    w = o_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    out<< "\nGame history\n";
    for (auto& b: manager.games)
    {
        out << b;
    }
    return out;
}