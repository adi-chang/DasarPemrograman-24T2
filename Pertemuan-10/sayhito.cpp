#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc < 2) 
        printf("error: usage: sayhito {nama} {nama} {nama} ...");
    else {
        for (int i = 1; i < argc; i++)
            printf("Hai, %s\n", argv[i]);
        printf("Welcome to C Programming Language. Happy Learning !! \n");
    }
    return 0;
}