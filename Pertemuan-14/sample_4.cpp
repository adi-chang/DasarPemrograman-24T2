/*

Nama                             Nilai
--------------------------------------
Robert                             100
Susanna                             90
Tania                              100
Gunawan                             85
Ucok                                60
Udin                                 0
--------------------------------------
nilai terbesar    =  100
nilai terkecil    =    0
nilai rata - rata = 72.5

*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

typedef struct  {
	string 	nama; 
	int		nilai;
} DataSiswa;

int get_nilai_terbesar(DataSiswa data[], int n) {
    int max = data[0].nilai;
    for ( int i = 1 ; i < n ; i++ ) 
        if (max < data[i].nilai) max = data[i].nilai;
    return max;
}

int get_nilai_terkecil(DataSiswa data[], int n) {
    int min = data[0].nilai;
    for ( int i = 1 ; i < n ; i++ ) 
        if (min > data[i].nilai) min = data[i].nilai;
    return min;
}

int sum(DataSiswa data[], int n) {
    int jlh = 0;
    for ( int i = 0 ; i < n ; i++ ) jlh += data[i].nilai;
    return jlh;
}

double average(DataSiswa data[], int n) {
    return (sum(data, n) * 1.0) / n;
}

char* get_string(const char *prompt) {
	char *str = (char *)malloc(sizeof(char) * 50);
	char c;
	while (true) {
		strcpy(str, "");
		printf("%s", prompt);
		scanf("%[^\n]", str);
		if (str[0] != '\0') break;
		while ((c = getchar()) != '\n' && c != EOF){}
	}
	while ((c = getchar()) != '\n' && c != EOF){}
	return str;
}

bool isnumeric(const char *str) {
	for (int i = 0; i < strlen(str); i++)
		if (!isdigit(str[i])) return false;
	return true;
}

int get_int(const char *prompt) {
	char *str = (char *)malloc(sizeof(char) * 50);
	char c;
	while (true) {
		strcpy(str, "");
		printf("%s", prompt);
		scanf("%[^\n]", str);
		if (strcmp(str, "") != 0 && isnumeric(str)) break;
		while ((c = getchar()) != '\n' && c != EOF){}
	}
	while ((c = getchar()) != '\n' && c != EOF){}
	return atoi(str);
}

int main() {

    system("cls");

    int i, n;
    
    int x;
    
    do {
    	x = get_int("N ? ");
	} while (x <= 0);
	 
    n = x;
    
    DataSiswa data[n];

	for ( i = 0 ; i < n ; i++ ) {
		system("cls");
		cout << "Data Siswa ke - " << i+1 << ": " << endl << endl;
		data[i].nama = get_string("Nama  ? ");
		do {
			x = get_int("Nilai ? ");
			if ( x < 0 || x > 100) 
				cout << "error: nilai tidak valid (valid: 0 .. 100)\n";
			else
			   break;
		} while (true);
		data[i].nilai = x;
	}
    
    system("cls");
    
    cout << left << setw(25) << "Nama" << right << setw(5) << "Nilai" << endl;
    for ( i = 0; i < 30 ; i++ ) cout << "-";
    cout << endl;    

    for ( i = 0 ; i < n; i++ ) 
        cout << left << setw(25) << data[i].nama 
		     << right << setw(5) << data[i].nilai << endl;

    for ( i = 0; i < 30 ; i++ ) cout << "-";
    cout << endl;    

    cout << "nilai terbesar    = " << right << setw(4) << get_nilai_terbesar(data, n) << endl;
    cout << "nilai terkecil    = " << right << setw(4) << get_nilai_terkecil(data, n) << endl;
    cout << "nilai rata - rata = " << setw(4) << right << fixed << setprecision(2) 
		 << average(data, n) << endl << endl;

    return 0;
}

