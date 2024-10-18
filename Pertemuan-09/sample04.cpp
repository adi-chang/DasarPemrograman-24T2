#include <iostream>

using namespace std; 

int main() {

	int x;
		
	cout << "X ? "; 
	cin >> x;
	
	int hitung = 0;
	
	for (int i = 1; (i <= x && hitung <= 2); i++) {
		if (x % i == 0) 
			hitung++;
	}	
	
	cout << x << " prima ? " << (hitung == 2 ? "YA": "TIDAK") << endl;

	return 0;
}
