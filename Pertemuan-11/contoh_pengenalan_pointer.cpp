#include <iostream>

using namespace std;

int main(void) {

    // a = variable biasa
    int a; 

    // assign nilai 10 ke variable a
    a = 10;

    cout << "a: " << a << endl;

    cout << "alamat memori dari var. a: " << &a << endl;

    // create pointer p 
    int *p = NULL;

    p = &a;

    cout << "nilai var. a dilihat dari pointer p: " << *p << endl; 
    cout << "memori address var. a dilihat dari pointer p: " << p << endl; 
    cout << "alamat memori dari pointer p: " << &p << endl; 





    return 0;
}