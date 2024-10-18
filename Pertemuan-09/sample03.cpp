#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i;
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		printf("%2d. Hello World\n", i+1);
		int x = rand() % 10 + 1;
		if (x == 1 || x == 2 || x == 3) break;
	}
	if (i == 10) printf("all printed successfully.");
	return 0;
}



