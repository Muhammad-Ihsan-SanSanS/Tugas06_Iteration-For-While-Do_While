#include <iostream>
using namespace std;

int main () {
	int M = 100;
	
	while ( M <= 1000 ) {
		if ( M % 2 == 0 ) 
		{
			cout << M << " => bilangan genap" <<endl;
			M++;
		}
		else if ( M % 2 == 1 ) 
		{
			cout << M << " => bilangan ganjil" <<endl;
			M++;
		}
	}
	return 0;
}
