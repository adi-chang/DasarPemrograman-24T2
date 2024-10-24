#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isnumeric(const char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) 
            return 0;
    }
    return 1;
}

int get_int(const char* prompt) {
    char str[25];
    do {
        char c;
        printf("%s", prompt);    
        scanf("%[^\n]", str);
        if (isnumeric(str)) break;
        printf("sorry, input harus dalam numeric ...\n");
        while ((c = getchar()) != '\n' && c != EOF){}
    } while (1);
    return atoi(str);
}

int main(void) {

    system("cls");

    int n = get_int("n ? ");

    if (n < 1 || n > 100) 
        printf("Error: n valid untuk range: 1 - 100\n");
    else {
        system("cls");
        printf("n = %d\n", n);
        printf("Output:\n");
        for ( int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                printf("FizzBuzz\n");
            else if (i % 3 == 0)
                printf("Fizz\n");
            else if (i % 5 == 0)
                printf("Buzz\n");
            else   
                printf("%d\n", i); 
        }
    }

    return 0;
}