#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

class StringCounter {
	private: // access modifier
		string _str; // field
	public: // access modifier
		StringCounter(string str) { // constructor
			_str = str;
		}
		int Hitung_Huruf_Vokal() { // method
			int i;
			int count = 0;
			for ( i = 0 ; i < _str.length() ; i++ ) {
				char kar = _str[i];
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
};

int main(void) {
	string str;
	printf("Kalimat: "); getline(cin, str);
	// create object counter, bertipe StringCounter
	StringCounter counter(str); 
	// call method Hitung_Huruf_Vokal dari object counter	
	printf("Output: Jumlah karakter vokal = %d\n", counter.Hitung_Huruf_Vokal()); 
	return 0;
}
