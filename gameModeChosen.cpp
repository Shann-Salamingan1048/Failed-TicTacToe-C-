#include "TicTacToeHeader.h"
#include <iostream>
using namespace std;
void inputPlay(short choosePath, char user){
	board_numbers_tictac[choosePath] = user;
}
void player_vs_player :: startMode1(){
	short input;
	Board board;
	
	while(true){
	clearScreen();
	board.show_board();
	cin>>input;
	inputPlay(input-1,X_player);
	}
}