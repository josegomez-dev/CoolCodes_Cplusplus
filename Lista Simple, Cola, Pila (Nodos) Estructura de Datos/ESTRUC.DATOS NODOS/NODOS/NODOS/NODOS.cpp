// NODOS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListaEnt.h"
#include "PilaEnt.h"
#include "ColaEnt.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int fibonacci(int n);
int fibonacci(int n);

int main()
{

	cout << "" << fibonacci(5) << endl;

	cin.get();
	
    return 0;
}

int fibonacci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

