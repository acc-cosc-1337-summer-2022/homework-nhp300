#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"
 #include<iostream>

 bool TicTacToe3::check_column_win()
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

else if(pegs[0]=="O" && pegs[3]=="O" && pegs[6]=="O" ){
return true;
}
else
return false;
}

bool TicTacToe3::check_row_win()
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


bool TicTacToe3::check_diagonal_win()
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

void TicTacToe3 :: display_board()
{
    for(long unsigned int i=0; i < pegs.size(); i+=3)
    {
        std::cout<< pegs[i] << "|" << pegs[i+1] << "|" <<pegs[i+2] <<"|" <<pegs[i+3] << "\n";
    }

}