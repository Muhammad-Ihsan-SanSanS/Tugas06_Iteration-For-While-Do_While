#include <iostream>

using namespace std;

int main () {
	char huruf = 'y';
	
	do {
		cout << endl << "   input huruf y untuk berulang" <<endl;
		cout << "input huruf selain y untuk berhenti" <<endl <<endl;
		cout << "input huruf ";
		cin >> huruf;
	}
	while ( huruf == 'y' );
}
