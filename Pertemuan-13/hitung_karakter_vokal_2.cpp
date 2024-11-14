#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int hitung_huruf_vokal(string str) {
	int i;
	int count = 0;
	for ( i = 0 ; i < str.length() ; i++ ) {
		char kar = str[i];
		switch (tolower(kar)) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				count++;
				break;		
		}
	}
	return count;
}

int main(void) {
	string str; // object yang bertipe string
	printf("Kalimat: "); getline(cin, str);
	printf("Output: Jumlah karakter vokal = %d\n", hitung_huruf_vokal(str));	
	return 0;
}
