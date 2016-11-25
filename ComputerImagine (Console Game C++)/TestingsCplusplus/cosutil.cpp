#include "stdafx.h"
#include "HeaderUtil.h"
#include <string>

class CosUtil {
	int a;
	public:
		void clearConsole();
		void keepAlive();
		void setForegroundColor(std::string pcolor);
		int getRndmMax(int max);
};
void CosUtil::clearConsole() {
	system("cls");
	return;
}
void CosUtil::keepAlive() {
	std::cout << "\n\n... ." << std::endl;
	std::cin.get();
	system("PAUSE");
	return;
}
void CosUtil::setForegroundColor(std::string pcolor) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	bool check = false;

	if (pcolor == "red") {
		SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		check = true;
	}
	else if (pcolor == "boogerman") {
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		check = true;
	}
	else if (pcolor == "sea") {
		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		check = true;
	}
	else if (pcolor == "beta") {
		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE | FOREGROUND_INTENSITY);
		check = true;
	}
	else if (pcolor == "fire") {
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_RED);
		check = true;
	}

	if (!check) {
		std::cout << "*********************************" << std::endl;
		std::cout << "* Error foreground color name!  *" << std::endl;
		std::cout << "*********************************" << std::endl;
	}
}

int getRndmMax(int max) {
	//cout << "RND 0 to 10: " << (rand() % 10) << endl; // this generates a random number from 0 to 10
	//cout << "RND 5 to 9: " << ((rand() % 5) + 5) << endl; // this generates a random number from 5 to 10
	//cout << "RND 5 to 10: " << ((rand() % 6) + 5) << endl; // this generates a random number from 5 to 10
	return (rand() % (max + 1));
}



