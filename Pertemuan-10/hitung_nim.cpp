#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char nim[20];
    
    int jlh = 0;

    printf("Nim ? "); scanf("%s", nim);

    system("cls");
    printf("NIM : %s\n", nim);
    printf("Output: ");
    for (int i = 0; i < strlen(nim); i++) {
        if (i == 0)
            printf("%c ", nim[i]);
        else
            printf("+ %c ", nim[i]);
        jlh += (int)nim[i] - 48;
    }
    printf("= %i\n", jlh);

    return 0;
}
