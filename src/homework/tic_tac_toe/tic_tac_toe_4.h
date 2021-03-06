//h
#include"tic_tac_toe.h"

#ifndef Tic_Tac_Toe_4_H
#define Tic_Tac_Toe_4_H

class TicTacToe4: public TicTacToe
{
    public:
        TicTacToe4(): TicTacToe(4){}
        TicTacToe4(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner){}

    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
};

#endif 