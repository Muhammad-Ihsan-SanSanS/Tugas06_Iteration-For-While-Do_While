#include <iostream>
using namespace std;

int main () {
	int M, I;
	
	cout << "Masukkan nilai awal: ";
	cin >> M;
	
	cout << "Masukkan nilai akhir: ";
	cin >> I;
	
	for ( int i = M; i <= I; i++ ) 
		if ( i % 2 == 0 ) {
			cout << i << " => bilangan genap" <<endl;
		}
		else if ( i % 2 == 1 ) {
			cout << i << " => bilangan ganjil" <<endl;
		}
	return 0;
}
