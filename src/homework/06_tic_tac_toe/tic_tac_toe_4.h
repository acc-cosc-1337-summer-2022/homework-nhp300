//h
#include"tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE4_H
#define TIC_TAC_TOE4_H
using std::string;


class TicTacToe4: public TicTacToe
{

public:
    TicTacToe4() : TicTacToe(4){}; //default

private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
        void display_board() override;
};


#endif