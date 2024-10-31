#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// teknik passing parameter input ke function 
// 1. teknik pass by value
// 2. teknik pass by pointer
// 3. teknik pass by reference (only in c++) [reference = alias]

// 1. pass by value
void swap_1 (int a, int b) {
    // a dan b di sini disebut sebagai parameter formal
    int temp = a;
    a = b;
    b = temp;
}

// 2. pass by pointer
void swap_2 (int *a, int *b) {
    // a dan b di sini disebut sebagai parameter formal
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. pass by reference
void swap_3 (int &a, int &b) {
    // a dan b di sini disebut sebagai parameter formal
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    
    // mis. ada 2 variable, a dan b,
    // a dan b di sini disebut sebagai parameter aktual

    int a = 10, b = 20;

    cout << "semula: a: " << a << ", b: " << b << endl;

    cout << "swap ..." << endl;

    // memanggil function swap 1
    // parameter a dan b di sini, di pass ke function swap 
    // dengan teknik pass by value    
    // dengan teknik ini: perubahan nilai pada parameter formal, 
    // tidak mempengaruhi nilai parameter aktualnya 
    
    // swap_1(a, b); // yang dikirim adalah value dari parameter aktual a dan b

    // memanggil function swap 2
    // parameter a dan b di sini, di pass ke function swap 
    // dengan teknik pass by pointer    
    // dengan teknik ini: perubahan nilai pada parameter formal, 
    // akan mempengaruhi nilai parameter aktualnya 
    
    swap_2(&a, &b); // yang dikirim adalah address dari parameter aktual a dan b 
    
    // memanggil function swap 3
    // parameter a dan b di sini, di pass ke function swap 
    // dengan teknik pass by reference (only in c++)    
    // dengan teknik ini: perubahan nilai pada parameter formal, 
    // akan mempengaruhi nilai parameter aktualnya 
    // cara kerjanya mirip dengan pointer, 
    // tapi dengan cara penulisan yang lebih sederhana 

    // swap_3(a, b);

    cout << "after: a: " << a << ", b: " << b << endl;

    return 0;
}

