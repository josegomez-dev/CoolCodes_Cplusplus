// File Handling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void useWriter();
void useReader();

int main()
{
	useWriter();
	useReader();
		
	system("PAUSE");
    return 0;
}

void useWriter() {

	ofstream writer("file1.txt"); // Create or identify

	if (writer.is_open()) {
		writer << "File Handler Test" << endl;
		writer << "Jose Alejandro Gomez Castro" << endl;

		cout << "Writing was succes!" << endl;
	}
	else {
		cout << "Error" << endl;
	}

	return;
}

void useReader() {

	ifstream reader("file3.txt"); // Create or identify

	int a, b;
	
	if (reader.is_open()) {
		reader >> a;
		reader >> b;
	
		cout << "Sum of variables a and b is " << a + b << endl;
	}
	else {
		cout << "Error" << endl;
	}

	reader.close();

	return;
}