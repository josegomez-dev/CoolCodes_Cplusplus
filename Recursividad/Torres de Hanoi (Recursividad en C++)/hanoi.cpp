#include <iostream>

using namespace std;

void hanoi(int, char, char, char);

int main(int argc, char** argv) {

	int disks = 5;
	
	hanoi(disks, 'A', 'C', 'B');
	 
	cin.get();
	 
	return 0;
}

// hanoi(disks, origin, destiny, auxiliar)
void hanoi(int d, char ori, char dest, char aux){

	if( d == 1 ){
		cout << "Move disk " << d << " from " << ori << " to " << dest << endl;
	}else{	
		hanoi( (d-1), ori, aux, dest );
		cout << "Move disk " << d << " from " << ori << " to " << dest << endl;
		hanoi( (d-1), aux, dest, ori );
	}
	
	cout << "\n-- execute algorithm --\n" << endl;
	
	return;
}


