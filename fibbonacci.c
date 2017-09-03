#include<stdio.h>

int fib(int termNo) {
	if ( termNo <= 1 ) {
		return 0;
	}
	else if ( termNo == 2 ) {
		return 1;
	}
	else {
		return fib ( termNo - 1 ) + fib ( termNo - 2 );
	}
}

void main() {
	int n,i;
	printf ( "Enter the number: " );
	scanf ( "%d" , &n );
	for( i = 1; i <= n; i++ ) {
		printf ( "%d\t" , fib ( i ) );
	}
	printf ( "\n" );
}
