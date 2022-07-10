//h
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;

class TicTacToe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const{return player;}
        void display_board() const;
        string get_winner();


        
    private:
        std::string player;
        std::vector<std::string> pegs{9, " "};
        void clear_board();
        void set_next_player();
        bool check_board_full();
        void set_winner();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        string winner;

};

#endif