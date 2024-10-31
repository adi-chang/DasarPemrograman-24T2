#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int i;
    int n = 5;

    // request alokasi memori secara dinamis ke operating system
    // malloc = memory allocation
    int *p = (int *)malloc(sizeof(int)*n); 

    // isi data [index 0 .. 4]
    for ( i = 0 ; i < n ; i++ )
        p[i] = i+1;

    // menampilkan data
    for ( i = 0 ; i < n ; i++ )
        cout << p[i] << ", " ;
    cout << endl;

    n = 10; 
    
    // realloc = memory reallocation 
    // kita ingin meresize ukuran dari memory yang sudah direquest sebelumnya untuk pointer p
    p = (int *)realloc(p, sizeof(int) * n);

    // isi data [index 5 .. 9]
    for ( i = 5; i < n ; i++ )
        *(p+i) = i+1;

    // menampilkan data
    for ( i = 0 ; i < n ; i++ )
        cout << *(p+i) << ", " ;
    cout << endl;

    return 0;
}