#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// prototipe function 

void print_hello();
int add(int, int);
int hitung_jumlah(int, int []);

// main function

int main() {
    
    // memanggil function print_hello sebanyak 5x
    for ( int i = 0 ; i < 5 ; i++ )
        print_hello();

    int n = 10;
    // contoh data array 
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // menampilkan isi data variable array 
    cout << "data:" << endl;
    for ( int i = 0 ; i < n; i++ )
        cout << data[i] << ", ";
    cout << endl;

    // memanggil function hitung_jumlah 
    // untuk menghitung total jumlah data dari variable array data 
    // dan menampilkannya ke layar
    cout << "total jumlah data = " << hitung_jumlah(n, data) << endl;
    
    // memanggil function add untuk menjumlahkan nilai 2 dengan 3
    int hasil_jumlah = add(2, 3);
    cout << "2 + 3 = " << hasil_jumlah << endl;
    
    return 0;
}

// definisi function

void print_hello() {
    cout << 'h';
    cout << 'e';
    cout << 'l';
    cout << 'l';
    cout << 'o';
    cout << endl;
}

int add (int x, int y) {
    return x + y;
}

int hitung_jumlah(int n, int data[]) {
    int jlh = 0;
    for (int i = 0 ; i < n ; i++)
        jlh += data[i];
    return jlh;
}