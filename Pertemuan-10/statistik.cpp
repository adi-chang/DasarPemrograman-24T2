#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 100 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main() {

	srand(time(NULL));

	int i, n;
	
	int total = 0; 

	system("cls");
		
	cout << "n ? "; cin >> n;
	
	int data[n]; 
	
	cout << "random " << n << " data acak:\n";
	
	for ( i = 0 ; i < n ; i++ ) {
		int x = rand() % 100 + 1;
		data[i] = x;
		total += x;
		cout << setw(3) << i+1 << ". " << x << "\n";
		delay(1);
	}
	
	system("cls");
	
	cout << "n: " << n << "\n\n";
	
	bool first = true;
	for ( i = 0 ; i < n ; i++)  {
		if (first) {
			cout << setw(3) << data[i];
			first = false;
		}
		else 
			cout << ", " << setw(3) << data[i];
		if ((i+1) % 20 == 0) {
			cout << "\n";	
			first = true;
		}
	}
		
	cout << "\n\n";
	
	cout << "total jumlah keseluruhan data = " << total << "\n";
	
	return 0;
}
