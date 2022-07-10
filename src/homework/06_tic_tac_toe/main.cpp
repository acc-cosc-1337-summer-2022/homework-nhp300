#include "tic_tac_toe.h"

#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

do
{
	cout<<"Enter first player (\"X\" or \"O\"): ";
	cin>> first_player;

	if(first_player != "X" && first_player != "O"){
			do{
				cout<<"Not enter a valid character\n";
				cout<<"Please enter an X or an O: "<<"\n";
				cin>>first_player;
			}while(first_player != "X" && first_player != "O");
	}

	game.start_game(first_player);
	int position;

 while (!game.game_over())
{
	cout<<"Enter a position: ";
	cin>>position;
	game.mark_board(position);
	game.display_board();
}

	cout<<"Winner of the game is: " << game.get_winner()<<"\n";
	cout<<"Play again, enter y or Y? ";
	cin>>user_choice;

}while( user_choice == 'y' || user_choice == 'Y');
}