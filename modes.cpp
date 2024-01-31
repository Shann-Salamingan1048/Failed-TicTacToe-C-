#include <iostream>
#include <windows.h> // for sleep
#include <iomanip>
#include <cstdio> // for flush
#include <stdexcept>
#include "TicTacToeHeader.h"
using namespace std;
void clearScreen()
{
	system("clear");
}
void clearCIN(){
		cin.clear(); // Reset the error state.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer.
}
void start_the_game :: notValidMode(short typeInvalid){
	if(typeInvalid == 1){
		char NotValid[] = "Not a Valid Mode!";
		char chooseAgain[] = "Please choose again.";
		clearScreen();
		for (char i : NotValid)
		{
			cout << i;
			cout.flush();
			Sleep(50);
		}
		Sleep(500);
		cout << endl;
		for (char i : chooseAgain)
		{
			cout << i;
			cout.flush();
			Sleep(50);
		}
		Sleep(1000);
		clearScreen();
	}
	else if(typeInvalid == 2){
		char NotValid[] = "Please input numbers only.";
		char chooseAgain[] = "Please choose again.";
		clearScreen();
		for (char i : NotValid)
		{
			cout << i;
			cout.flush();
			Sleep(50);
		}
		Sleep(500);
		cout << endl;
		for (char i : chooseAgain)
		{
			cout << i;
			cout.flush();
			Sleep(50);
		}
		Sleep(1000);
		clearScreen();		
	}
}
void start_the_game ::chooseMode()
{
	bool run = true;
	short choose_Num_mode = 0;
	while(run){
		clearScreen();
		cout << setw(25) << "Choose Mode" << endl;
		cout << setw(15) << "1. Player vs Player " << endl;
		cout << setw(15) << "2. Player vs Computer " << endl;
		cout << setw(15) << "3. Computer vs Computer " << endl;
		cin >> choose_Num_mode;
		if(cin.fail()){
		   notValidMode(2);
		}
		else{
			switch(choose_Num_mode){
				case 1: 	
				    player_vs_player *pvp;			
					pvp->startMode1();
					delete pvp;
					run = false;
					break;
				case 2: 
					run = false; 
					break;
				case 3: 
					run = false; 
					break;				
				default:
						notValidMode(1);
						break;
			}
		}
		clearCIN();
	}// end of while loop
}
void start_the_game ::start()
{
	char Introduction[] = "Welcome To The TicTacToe Game Made by Shann :-->";
	cout << setw(25);
	unsigned char format_spaces = 0;
	for (char i : Introduction)
	{
		if (isspace(i))
		{
			format_spaces++;
			cout << " ";
			if (format_spaces == 1)
				cout << endl
					 << setw(26);
			else if (format_spaces == 3)
				cout << endl
					 << setw(21);
			else if (format_spaces == 5)
				cout << endl
					 << endl
					 << setw(12);
		}
		else
		{
			cout << i;	// print one character
			cout.flush(); // clear the output buffer
			Sleep(50);
		}
	} // end of for loop
	Sleep(1000);
	clearScreen();
	chooseMode();
}