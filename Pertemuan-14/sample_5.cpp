 #include <iostream>
 #include <ctime>
 
 using namespace std;
 
  typedef struct {
 	int n;
 	int *arr;
 } RandomNumberGenerator;
 
 
 RandomNumberGenerator generate_numbers() {
 	RandomNumberGenerator generator;
	int x;
	do {
		x = rand() % 20 + 1;	
	} while (x < 2 || x > 20);
	generator.n = x;
	generator.arr = (int *)malloc(sizeof(int) * generator.n);
	int c = 0;
	do {
		x = rand() % 100 + 1;
		bool ada = false;
		for ( int i = 0 ; i < c ; i++ ) {
			if (generator.arr[i] == x) {
				ada = true;
				break;
			} 
		}
		if (!ada) 
			generator.arr[c++] = x;
	} while (c < generator.n);
	return generator;
 }
 
 int main() {
 	
	 srand(time(NULL));	
 	
	 int n = 5;
	 
	 for ( int i = 1 ; i <= n ; i++ ) {
	 	cout << "Percobaan - " << i << ":" << endl;
	 	RandomNumberGenerator rnd = generate_numbers();
	 	cout << "N: " << rnd.n << endl;
	 	for ( int j = 0 ; j < rnd.n ; j++ ) {
	 		cout << rnd.arr[i] << ", ";
		}
		cout << endl << endl;
	 }
	 
	 return 0;
 }
