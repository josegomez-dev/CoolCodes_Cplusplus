#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int, int, int);

using namespace std;

int main(int argc, char** argv) {
	
	fibonacci(0,1,10);
	
	return 0;
}

int fibonacci(int penultimo, int ultimo, int n){
	int actual;
	cout << ultimo << endl;
	if(n > 1){
		actual = penultimo + ultimo;
		n--;
		fibonacci(ultimo, actual, n);
		return n;
	}
}
