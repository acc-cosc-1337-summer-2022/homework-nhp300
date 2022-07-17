#include "tic_tac_toe.h"

#include<iostream>

bool TicTacToe::game_over()
{

    if(check_diagonal_win() || check_row_win() || check_column_win())
    {
        set_winner();
        return true;
    }

    if(check_board_full()) // inside of above statement 
    {
        winner = "C";
        return true;
    }
    
    return false;

}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}
  
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

/*void TicTacToe::display_board() //const
{
    for(long unsigned int i=0; i< pegs.size(); i+=3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}*/

string TicTacToe::get_winner()
{
    return winner;
}

//private functions //checK-board_full uses pegs
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i =0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;          
        }
    }

    return true;
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else{
        player = "X";
    }
}


void TicTacToe::set_winner()
{
            if(player == "X"){

            winner = "O";
    }

        else{
            winner = "X";
    }

}

/*
bool TicTacToe::check_column_win()
{

if(pegs[0] =="X" && pegs[3] =="X" && pegs[6]=="X" ){
    return true;
}

else if(pegs[1]=="X" && pegs[4]=="X" && pegs[7]=="X" ){
return true;
}

else if(pegs[2]=="X" && pegs[5]=="X" && pegs[8]=="X" ){
return true;
}

else if(pegs[1]=="O" && pegs[4]=="O" && pegs[7]=="O" ){
return true;
}       

else if(pegs[2]=="O" && pegs[5]=="O" && pegs[8]=="O" ){
return true;
}

else if(pegs[3]=="O" && pegs[6]=="O" && pegs[9]=="O" ){
return true;
}
else
return false;
}

bool TicTacToe::check_row_win()
{          
    if(pegs[0] =="X" && pegs[1] =="X" && pegs[2]=="X" ){
    return true;
    }

    else if(pegs[3]=="X" && pegs[4]=="X" && pegs[5]=="X" ){
    return true;
    }

    else if(pegs[6]=="X" && pegs[7]=="X" && pegs[8]=="X" ){
    return true;
    }

    else if(pegs[0]=="O" && pegs[1]=="O" && pegs[2]=="O" ){
    return true;
    }       

    else if(pegs[3]=="O" && pegs[4]=="O" && pegs[5]=="O" ){
    return true;
    }

    else if(pegs[6]=="O" && pegs[7]=="O" && pegs[8]=="O" ){
    return true;
    }
    else
    return false;
}


bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] =="X" && pegs[4] =="X" && pegs[8]=="X" ){
            return true;
        }

    else if(pegs[6]=="X" && pegs[4]=="X" && pegs[2]=="X" ){
    return true;
        }

    else if(pegs[0]=="O" && pegs[4]=="O" && pegs[8]=="O" ){
    return true;
    }       

        else if(pegs[6]=="O" && pegs[4]=="O" && pegs[2]=="O" ){
        return true;
    }

    else
    return false;
}

*/

