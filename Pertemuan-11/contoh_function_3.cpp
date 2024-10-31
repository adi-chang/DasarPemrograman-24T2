#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// contoh function 

// function ini bertugas untuk me-random n buah data int (range: 1 .. 100)
// dan data hasil random (n buah) akan dikembalikan via parameter input
// yang dipassing dengan teknik pass by pointer
// array akan dipassing dengan teknik pass by pointer 
void random_n_value_1(int n, int data[]) {
    for ( int i = 0 ; i < n ; i++ )
        data[i] = rand() % 100 + 1;
}

// function ini bertugas untuk me-random n buah data int (range: 1 .. 100)
// function ini akan mengembalikan alamat pertama dari sebuah koleksi data (array)
// yang didapatkan dengan memanfaatkan alokasi memori secara dinamis 
int* random_n_value_2(int n) {
    // request n - buah storage (masing-masing storage seukuran tipedata int)
    int *data = (int*)malloc(sizeof(int) * n);
    // random n buah data dan simpan ke dalam setiap storage yg ada, 
    // secara sequentially
    for (int i = 0; i < n; i++)
        data[i] = rand() % 100 + 1;
    // return alamat storage yang pertama 
    return data;
}

int main() {

    srand(time(NULL));

    int n = 10;
    
    int data1[10];

    random_n_value_1(n, data1);

    cout << "data1: " << endl;
    for (int i = 0; i < n; i++)
        cout << data1[i] << ", ";
    cout << endl;

    int *data2 = random_n_value_2(n);

    cout << "data2: " << endl;
    for (int i = 0; i < n; i++)
        cout << data2[i] << ", ";
    cout << endl;


    return 0;
}
