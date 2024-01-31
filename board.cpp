#include <iostream>
#include <vector>
#include <iomanip>
#include "TicTacToeHeader.h"
using namespace std;
 float X_score = 0;
 float O_score = 0;
 int countIfDraw = 0;
vector<vector<short>> winning_combi = {
	{0,1,2} , {3,4,5} , {6,7,8} , // row
	{0, 4, 8,}, {2,4,6}, // diagonal
	{0, 3,6} , {1,4,7} , {2,5,8} // column
};
vector<char> board_numbers_tictac =
{
	'1', '2', '3',
	'4', '5' ,'6',
	'7', '8', '9'
};	
vector<vector<string>> names =
{
	{"Player 1", "Player 2"},
	{"Player" , "Computer"},
	{"Computer 1" , "Computer 2"}
};
Board::Board(){ // constructor
}
void Board :: show_board(){
	unsigned char k = 1;
	cout << " -------------------------------" << endl;
	for(char i : board_numbers_tictac){	 
		cout << "|" << setw(5) << i << setw(5) << "|";
		if(k % 3 == 0)
		  cout << endl << " -------------------------------" << endl;
		k++;
	}
 }
 void Board::verifyCombi_X_or_O(){
 	for(vector<short> i : winning_combi){
 		if(verifyWinCombiAlgo(i , X_player)){
 			X_score++;
 			countIfDraw = 0;
 			}
 	    else if(verifyWinCombiAlgo(i, O_player)){
 	        O_score++;
 	        countIfDraw = 0;
 	    }
 	}
 	if(countIfDraw == 9){
 		X_score += 0.5;
 		O_score += 0.5;
 	}
 }

 bool Board::verifyWinCombiAlgo(vector<short> indexes, char user ){
 	for(int i : indexes){
 		if(board_numbers_tictac[i] == user){
 		   countIfDraw++;
 		   return true;}
 		return false;
 	}
 }

