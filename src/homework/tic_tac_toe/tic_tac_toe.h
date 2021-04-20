//h
#include<string>
#include <vector>

using std::string;  using std::vector;

//class for tic tac toe game
class TicTacToe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
        string get_player() const{return player;}
        string get_winner() const{return winner;} // Homework 7

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        // Homework 7
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();

        string player;
        string winner;
        vector<string> pegs{9," "};

};