//h
#include<string>
#include<vector>
#include<iostream>
#include<memory>


using std::string;
using std::unique_ptr;
using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

    public:
        TicTacToe(int size): pegs(size * size, " "){}; //default cons.

        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const{return player;}
        virtual void display_board() = 0; //const;
        string get_winner(); // {};


    protected:
        //std::vector<std::string> pegs{9, " "};
        std::vector<std::string> pegs;
        virtual bool check_column_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win() = 0;
        
    private:
        std::string player;
        std::string winner;
        void clear_board();
        void set_next_player();
        bool check_board_full();
        void set_winner();

};

#endif