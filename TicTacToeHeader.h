#pragma once
#include <vector>
using namespace std;
extern vector<vector<short>> winning_combi;
extern vector<char> board_numbers_tictac;
extern vector<vector<string>> names;
const char O_player = 'O';
const char X_player = 'X';
extern float O_score;
extern float X_score;
extern int countIfDraw;
void clearScreen();
void cleatCIN();
class start_the_game{
	private:
		void notValidMode(short typeInvalid);
		void chooseMode();
	public:
	 	void start();
};
void inputPlay(char user);
void setNames();
class player_vs_computer{
	public:
	   player_vs_computer();//constructor
	   void choose_X_or_O();
	   void startMode2();
};
class player_vs_player{
	public:
	   player_vs_player(); // constructor
	   void startMode1();
};
class Board{
	private: 
	  void verifyCombi_X_or_O();
	  bool verifyWinCombiAlgo(vector<short> indexes, char user);
	
	public:
	    Board(); // constructor
	    void show_board();	
	    
};
