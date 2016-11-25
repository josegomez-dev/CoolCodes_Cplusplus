// Tic Tac Toe (Console Game).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9' };
char player = 'X';

void draw() {
	
	cout << "*********************" << endl;
	cout << "* Tic Tac Toe v1.0  *\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "*********************" << endl;

}

void input() {
	
	int a;
	cout << "\nPress the number of the field: ";
	cin >> a;

	if (a == 1) {
		matrix[0][0] = player;
	}
	else if (a == 2) {
		matrix[0][1] = player;
	}
	else if (a == 3) {
		matrix[0][2] = player;
	}
	else if (a == 4) {
		matrix[1][0] = player;
	}
	else if (a == 5) {
		matrix[1][1] = player;
	}
	else if (a == 6) {
		matrix[1][2] = player;
	}
	else if (a == 7) {
		matrix[2][0] = player;
	}
	else if (a == 8) {
		matrix[2][1] = player;
	}
	else if (a == 9) {
		matrix[2][2] = player;
	}

}

void togglePlayer() {
	if (player == 'X') {
		player = 'O';
	}
	else {
		player = 'X';
	}
}

char win() {
	//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][0] == 'X') {
		return 'X';
	}
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][0] == 'X') {
		return 'X';
	}
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][0] == 'X') {
		return 'X';
	}
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
		return 'X';
	}
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
		return 'X';
	}
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
		return 'X';
	}
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
		return 'X';
	}
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
		return 'X';
	}

	// second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][0] == 'O') {
		return 'O';
	}
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][0] == 'O') {
		return 'O';
	}
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][0] == 'O') {
		return 'O';
	}
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
		return 'O';
	}
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
		return 'O';
	}
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
		return 'O';
	}
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
		return 'O';
	}
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
		return 'O';
	}

	return '/';
}

int main()
{
	draw();

	while (1) {
		input();
		draw();
		if (win() == 'X') {
			cout << "X player Wins!\n";
			break;
		}
		else if (win() == 'O') {
			cout << "O player Wins!\n";
			break;
		}
		togglePlayer();
	}

	system("PAUSE");
    return 0;
}

