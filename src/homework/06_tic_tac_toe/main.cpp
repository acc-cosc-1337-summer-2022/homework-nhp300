#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<iostream>
#include<string>
#include<vector>
#include<memory>
using std::cout; using std::cin; using std::string;
using std::unique_ptr;
using std::make_unique;



int main() 
{
	string first_player;
	string winner;
	int size;
	char user_choice = 'y';

do
{
	cout<<"What size board? (\"3\" for 3x3 or \"4\" for 4x4): ";
	cin>> size;

	/*if(size != 3 && size != 4)
	{
				do{
					cout<<"Not a valid size \n";
					cout<<"Please enter 3 or 4: "<<"\n";
					cin>>size;
				}while(size != 3 && size != 4);
		}*/


	if(size == 3)
	{
			unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

			cout<<"Enter first player (\"X\" or \"O\"): ";
				cin>> first_player;

				/*if(first_player != "X" && first_player != "O"){
						do{
							cout<<"Not a valid character\n";
							cout<<"Please enter an X or an O: "<<"\n";
							cin>>first_player;
						}while(first_player != "X" && first_player != "O");
				}*/

			game->start_game(first_player);
			int position;
			while(!(game->game_over()))
			{
				cout<<"\nEnter a position between 1-9: ";
				cin>>position;
				//while(position < 1 || position > 9)
				//{
				//	cout<<"Invalid selection. Select between 1-9: \n";
				//	cin>>position;
					game->mark_board(position);
					game->display_board();
					cout<<"\ntestline\n";
			}


			//if //there is a winner (check for winner first)then print the winner
			if (game->get_winner() == "X" || game->get_winner() == "O")
		{
			cout<< "The winner is " <<game->get_winner() <<"\n";
		}


		//	winner = game->get_winner();
			//cout<<"Game Over! The winner is: "<<game->get_winner()<<"\n";
	}

	

	else if(size == 4)
		{
				unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

				cout<<"Enter first player (\"X\" or \"O\"): ";
					cin>> first_player;

					/*if(first_player != "X" && first_player != "O"){
							do{
								cout<<"Not a valid character\n";
								cout<<"Please enter an X or an O: "<<"\n";
								cin>>first_player;
							}while(first_player != "X" && first_player != "O");
					}*/

				game->start_game(first_player);
				int position;
				while(!(game->game_over()))
				{
					cout<<"\nEnter a position between 1-16: ";
					cin>>position;
					/*while(position < 1 || position > 16)
					{
						cout<<"Invalid selection. Select between 1-16: \n";
						cin>>position;*/
						game->mark_board(position);
						game->display_board();
					}

			if (game->get_winner() == "X" || game->get_winner() == "O")
			{
			cout<< "The winner is " <<game->get_winner() <<"\n";
			}
		}


	cout<<"Play again, enter y or Y? ";
	cin>>user_choice;

}while( user_choice == 'y' || user_choice == 'Y');

return 0;
}












/*
int main() 
{
	//TicTacToe3 game;
	string first_player;
	string winner;
	int size;
	char user_choice = 'y';

do
{

	cout<<"What size board? (\"3\" for 3x3 or \"4\" for 4x4): ";
	cin>> size;

	if(size != 3 && size != 4)
	{
				do{
					cout<<"Not a valid size \n";
					cout<<"Please enter 3 or 4: "<<"\n";
					cin>>size;
				}while(size != 3 && size != 4);
		}


	if(size == 3)
	{
			unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

			cout<<"Enter first player (\"X\" or \"O\"): ";
				cin>> first_player;

				if(first_player != "X" && first_player != "O"){
						do{
							cout<<"Not a valid character\n";
							cout<<"Please enter an X or an O: "<<"\n";
							cin>>first_player;
						}while(first_player != "X" && first_player != "O");
				}

			game->start_game(first_player);
			int position;
			while(!game->game_over())
			{
				cout<<"\nEnter a position between 1-9: ";
				cin>>position;
				//while(position < 1 || position > 9)
				//{
				//	cout<<"Invalid selection. Select between 1-9: \n";
				//	cin>>position;
					game->mark_board(position);
					game->display_board();
				}
			winner = game->get_winner();
			cout<<"Game Over! The winner is: "<<winner<<"\n";
			}

	

	else if(size == 4)
		{
				unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

				cout<<"Enter first player (\"X\" or \"O\"): ";
					cin>> first_player;

					if(first_player != "X" && first_player != "O"){
							do{
								cout<<"Not a valid character\n";
								cout<<"Please enter an X or an O: "<<"\n";
								cin>>first_player;
							}while(first_player != "X" && first_player != "O");
					}

				game->start_game(first_player);
				int position;
				while(!game->game_over())
				{
					cout<<"\nEnter a position between 1-16: ";
					cin>>position;
					while(position < 1 || position > 16)
					{
						cout<<"Invalid selection. Select between 1-9: \n";
						cin>>position;
						game->mark_board(position);
						game->display_board();
					}
				winner = game->get_winner();
				cout<<"Game Over! The winner is: "<<winner<<"\n";
				}

		}


	cout<<"Play again, enter y or Y? ";
	cin>>user_choice;

}while( user_choice == 'y' || user_choice == 'Y');
return 0;
}*/




/*cout<<"Enter first player (\"X\" or \"O\"): ";
	cin>> first_player;

	if(first_player != "X" && first_player != "O"){
			do{
				cout<<"Not a valid character\n";
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
	//game.display_board();
}

	cout<<"Winner of the game is: " << game.get_winner()<<"\n";
	cout<<"Play again, enter y or Y? ";
	cin>>user_choice;

}while( user_choice == 'y' || user_choice == 'Y');
}*/