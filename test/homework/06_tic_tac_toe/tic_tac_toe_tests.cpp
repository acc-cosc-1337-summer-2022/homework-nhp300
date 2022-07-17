#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the full board board winner is C 3x3") {
//check after every test case possible to make sure board isnt full
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to X"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE(game->get_player()=="X");
}

TEST_CASE("Test first player set to O"){ 
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
}

TEST_CASE("Test win  on 3x3  by first column X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by first column O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 by second column X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);  //3 or 6
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by second column O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 by third column X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by third column O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 by first row X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by first row O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 by second row X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by second row O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 by third row X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 by third row O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 diagonally from top left X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 diagonally from top left O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}

TEST_CASE("Test win  on 3x3 diagonally from bottom left X"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win  on 3x3 diagonally from bottom left O"){
		unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
}



TEST_CASE("Test if the full board board winner is C 4x4") {

	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);                        
	REQUIRE(game->game_over() == false);      
	game->mark_board(2);                        
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);	
	game->mark_board(4);
	REQUIRE(game->game_over() == false);	
	game->mark_board(5);	
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);	
	game->mark_board(7);
	REQUIRE(game->game_over() == false);	
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win on 4x4 by first column")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);                      
	REQUIRE(game->game_over() == false);        
	game->mark_board(2);                      
	REQUIRE(game->game_over() == false);        
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false); 
	game->mark_board(9);
	REQUIRE(game->game_over() == false); 
	game->mark_board(4);
	REQUIRE(game->game_over() == false); 
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win on 4x4 by second column")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);                  
	REQUIRE(game->game_over() == false);     
	game->mark_board(1);                    
	REQUIRE(game->game_over() == false);     
	game->mark_board(6);
	REQUIRE(game->game_over() == false);	
	game->mark_board(3);
	REQUIRE(game->game_over() == false); 
	game->mark_board(10);
	REQUIRE(game->game_over() == false); 
	game->mark_board(4);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win on 4x4 by third column")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);                   
	REQUIRE(game->game_over() == false);    
	game->mark_board(1);                    
	REQUIRE(game->game_over() == false);  
	game->mark_board(7); 
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win on 4x4 by forth column")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);                 
	REQUIRE(game->game_over() == false); 
	game->mark_board(1);                  
	REQUIRE(game->game_over() == false);  
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win on 4x4 by first row")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);                   
	REQUIRE(game->game_over() == false);//	   
	game->mark_board(5);                    
	REQUIRE(game->game_over() == false);//      
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win on 4x4 by second row")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);                  
	REQUIRE(game->game_over() == false);   
	game->mark_board(1);                   
	REQUIRE(game->game_over() == false);    
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win on 4x4 by third row")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);                 
	REQUIRE(game->game_over() == false);    
	game->mark_board(1);                 
	REQUIRE(game->game_over() == false);    
	game->mark_board(10);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win on 4x4 by the fourth row")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);                 
	REQUIRE(game->game_over() == false);     
	game->mark_board(1);                   
	REQUIRE(game->game_over() == false);    
	game->mark_board(14);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win on 4x4 diagonally from top left")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);                  
	REQUIRE(game->game_over() == false);     
	game->mark_board(2);                    
	REQUIRE(game->game_over() == false);    
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);	 
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win on 4x4 diagonally from top right")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);                   
	REQUIRE(game->game_over() == false);     
	game->mark_board(1);                    
	REQUIRE(game->game_over() == false);      
	game->mark_board(7);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);	 
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);		
	REQUIRE(game->game_over() == true);
}