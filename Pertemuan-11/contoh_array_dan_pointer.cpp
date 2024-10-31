#include <iostream>

using namespace std;

int main(void) {

    // array dari 10 buah bilangan int
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i, n = 10;
    
    // cara normal membaca isi data pada variable array data
    // for ( i = 0 ; i  < n; i++ )
    //     cout << data[i] << ", ";

    // menugaskan pointer p untuk me-reference ke alamat index-0 dari variable array data
    int *p = data;

    // cara-1 membaca data variable array data
    // for ( i = 0 ; i < n ; i++ ) {
    //     cout << *(p+i) << ", ";
    // }

    // cara-2 membaca data variable array data
    for ( i = 0 ; i < n ; i++ ) {
        cout << *p++ << ", ";
    }

    
    
    cout << endl << endl;

    return 0;
}