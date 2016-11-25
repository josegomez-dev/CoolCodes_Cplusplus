#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int factorial(int);

int main(int argc, char** argv) {

	cout << factorial(3) << endl;
	
	return 0;
}

int factorial (int n){
	if(n == 0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
