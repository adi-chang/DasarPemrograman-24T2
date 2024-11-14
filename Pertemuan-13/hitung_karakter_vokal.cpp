#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hitung_huruf_vokal(char str[]) {
	int i;
	int count = 0;
	for ( i = 0 ; i < strlen(str) ; i++ ) {
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
	char str[256]; // c-style string [array of char]
	printf("Kalimat: "); scanf("%[^\n]", str);
	printf("Output: Jumlah karakter vokal = %d\n", hitung_huruf_vokal(str));	
	return 0;
}
