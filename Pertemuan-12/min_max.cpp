#include <iostream>

using namespace std;

int main() {
	
	int a, b, c, min, max;
	
	cout << "bilangan: "; cin >> a >> b >> c;
	
	if (a == b || a == c || b == c)
		cout << "error: nilai yang input tidak unik\n";
	else {
		min = a;
		max = a;
		if (min > b) min = b;
		if (min > c) min = c;
		if (max < b) max = b;
		if (max < c) max = c;
		cout << "terkecil = " << min << ", terbesar = " << max << endl;
	}
	
	return 0;
}
