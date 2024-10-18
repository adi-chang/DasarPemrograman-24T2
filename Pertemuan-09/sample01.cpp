#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

    char nama[25];

    printf("Nama ? "); scanf("%[^\n]", &nama);

    if (strcmp(nama, "") == 0) 
        printf("Error, nama masih kosong ...\n");
    else 
        printf("Hello, %s, semangat belajar bahasa pemrograman c !!!\n", nama);

    return 0;
}