// TestingsCplusplus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HeaderUtil.h"

int main()
{
	util.setForegroundColor("boogerman");

	int num, numrand;
	char yn; // yes or no
	string name;
	srand(time(NULL)); // IMPORTANT
	
	cout << "Welcome and please enter your name: "; cin >> name;
	
	while (true) {
		cout << "Hello: " << name << " do you want to play a game (y/n): "; cin >> yn;
		
		if (yn == 'n' || yn == 'N') {
			return 0; // exit program
		}
		else if (yn == 'y' || yn == 'Y'){
			break;
		}
	}

	util.clearConsole();
		
	bool valid = false;

	while (true) {
		cout << "Computer will imagine one number from 0 to 5 and you should gess it: "; cin >> num;
		numrand = getRndmMax(5);
	
		if (cin.good()) {
			if (numrand == num) {
				util.clearConsole();
				cout << "\n !/* You Win!  " << "\n" << endl;
				break;
			}
			else if (num == -1) {
				break;
			}
			else {
				cout << "\n !/* You lose! The computer imagined number " << numrand << "\n" << endl;
			}

			valid = true;
		}
		else {
			cout << "!/* Error, please enter a number */!" << endl;
			break;
		}
	}

	util.keepAlive();
    return 0;
}


