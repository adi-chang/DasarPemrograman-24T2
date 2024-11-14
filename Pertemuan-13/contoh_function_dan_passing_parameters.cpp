#include <stdio.h>
#include <iostream>

void print_n_times(const char *, int);
void print_data(int [], int);
void hitung (int [], int, int*, double*);
int sum(int [], int); 
double average(int [], int);

int main(void) {

	const char *str = "Budi"; 
	int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::cout << sizeof(data) << std::endl;

	// print Hello, Budi (10x) 
	//  1. Hello, Budi
	//  2. Hello, Budi 
	// ...
	// 10. Hello, Budi
	
	print_n_times(str, 10);
	
	printf("data:\n"); 
	print_data(data, sizeof(data)/sizeof(int));
	
	int jumlah = 0;
	double rata = 0;

	hitung(data, 10, &jumlah, &rata);
	
	printf("Jumlah data       = %d\n", jumlah);
	printf("Nilai rata - rata = %.2f\n", rata);
	
	jumlah = sum(data, 10);
	rata = average(data, 10);
	
	printf("Jumlah data       = %d\n", jumlah);
	printf("Nilai rata - rata = %.2f\n", rata);
	

	return 0;
}

void print_n_times(const char *s, int n) {
	int i;
	for ( i = 1 ; i <= n ; i++ )
		printf("%2d. Hello, %s\n", i, s);
	printf("\n");
}

void print_data(int data[], int n) {
	int i; 
	for ( i = 0 ; i < n ; i++ ) 
		printf("%d, ", data[i]);
	printf("\n");
}

void hitung (int data[], int n, int *jumlah, double *rata) {
	int i;
	for ( i = 0 ; i < n ; i++ )
	    *jumlah += data[i];
	*rata = *jumlah * 1.0 / n;
}

int sum(int  data[], int n) {
	int jlh = 0;
	int i;
	for ( i = 0 ; i < n ; i++ )
	   jlh += data[i];
	return jlh;
}

double average(int data[], int n) {
	return 1.0 * sum(data, n) / n;
}


