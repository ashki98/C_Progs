#include<stdio.h>

void main() {
	int n, fact = 1, i;
	printf ( "Enter the n: ");
	scanf ( "%d" , &n );
	for ( i = 1; i <= n; i ++ ) {
		fact = fact * i;
	}
	printf ( "fact of %d is %d\n", n, fact );
}
