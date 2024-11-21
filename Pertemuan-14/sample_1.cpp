#include <iostream>
#include <iomanip>

using namespace std;

typedef struct {
	int 	id;
	string 	nama;
	int 	nilai;
} DataSiswa;

int main() {
	
	int n = 5;
	int i;	
	
	DataSiswa data[] = {
		{ 1, "Robert", 100 },
		{ 2, "Susan", 90 },
		{ 3, "Linda", 100 },
		{ 4, "Gunawan",70 },
		{ 5, "Jessica", 50 }
	};
	
	string line(58, '-');

	cout << line << endl;
	cout << left << setw(2) << "ID" << " " << setw(50) << "NAMA" << setw(5) << "NILAI" << endl;
	cout << line << endl;
	
	for ( i = 0 ; i < n ; i++ ) 
		cout << right << setw(2) << data[i].id	 
		     << " " << left << setw(50) << data[i].nama	 
			 << right << setw(5) << data[i].nilai << endl;
	
	cout << line << endl;
	
	cout << endl;
	
	return 0;
	
}
