#include <stdio.h>

int main() {

    char nama[50];

    printf("nama: "); scanf("%[^\n]", &nama);
    printf("nama anda: %s\n", nama);

    return 0;
}