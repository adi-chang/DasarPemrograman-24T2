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

using namespace std;

int get_nilai_terbesar(int nilai[], int n) {
    int max = nilai[0];
    for ( int i = 1 ; i < n ; i++ ) 
        if (max < nilai[i]) max = nilai[i];
    return max;
}

int get_nilai_terkecil(int nilai[], int n) {
    int min = nilai[0];
    for ( int i = 1 ; i < n ; i++ ) 
        if (min > nilai[i]) min = nilai[i];
    return min;
}

int sum(int nilai[], int n) {
    int jlh = 0;
    for ( int i = 0 ; i < n ; i++ ) jlh += nilai[i];
    return jlh;
}

double average(int nilai[], int n) {
    return (sum(nilai, n) * 1.0) / n;
}

int main() {

    system("cls");

    int i;
    char nama[][80] = { "Robert", "Susanna", "Tania", "Gunawan", "Ucok", "Udin" };
    int nilai[] = { 100, 90, 100, 85, 60, 0 };
    
    int n = sizeof(nilai)/sizeof(int);

    cout << left << setw(25) << "Nama" << right << setw(5) << "Nilai" << endl;
    for ( i = 0; i < 30 ; i++ ) cout << "-";
    cout << endl;    

    for ( i = 0 ; i < n; i++ ) 
        cout << left << setw(25) << nama[i] << right << setw(5) << nilai[i] << endl;

    for ( i = 0; i < 30 ; i++ ) cout << "-";
    cout << endl;    

    cout << "nilai terbesar    = " << right << setw(4) << get_nilai_terbesar(nilai, n) << endl;
    cout << "nilai terkecil    = " << right << setw(4) << get_nilai_terkecil(nilai, n) << endl;
    cout << "nilai rata - rata = " << setw(4) << right << average(nilai, n) << endl << endl;

    return 0;
}

