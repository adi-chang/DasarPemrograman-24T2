#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
	
	char str[512]; // c-style string
	
	int counter[26] {0};
	int others = 0;
	
	int i;
	
	// input
	
	cout << "kalimat: "; gets(str);
	
	// proses 
	
	strupr(str);
	
	for ( i = 0 ; i < strlen(str) ; i++ ) {
		if (isalpha(str[i])) {
			counter[(int)str[i] - 65]++;
		}
		else
			others++;
	}
	
	// output
	
	for ( i = 0 ; i < 10 ; i++ ) {
		cout << (char)(i+65) << " = " << setw(2) << counter[i] << "\t\t" 
		     << (char)(i+65+10) << " = " << setw(2) << counter[i+10] << "\t\t";
		if ((i+20) < 26) 
			cout << (char)(i+65+20) << " = " << setw(2) << counter[i+20];
		cout << endl;
	} 
	cout << "karakter lain = " << others << endl;
	
	return 0;
}
