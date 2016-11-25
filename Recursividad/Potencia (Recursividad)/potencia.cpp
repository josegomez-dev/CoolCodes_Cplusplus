#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int potencia(int, int);

using namespace std;

int main(int argc, char** argv) {
	
	cout << potencia(2,8);
	
	return 0;
}

int potencia(int b, int e){
	if(e > 1){
		return b*potencia(b, e - 1);
	}else{
		if(e == 0){
			return 1;
		}else{
			return b;
		}
	}
}
