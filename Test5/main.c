#include<stdio.h>

// The main loop
int main()
{
	// 
	int a, b, c, i, n;
	n = 10;
	a = 0;
	b = 1;

	//
	for ( i=2; i<=n; i++){
	c = a + b;
	a = b;
	b = c;
	}
	
	// Print the summation of a & b.
	printf( " Fibonacci number at %d is %d \n ", n, b );

	//
	return 0;
}


