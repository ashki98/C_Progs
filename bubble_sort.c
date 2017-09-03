#include<stdio.h>

void main() {
	int n, i, j, k, tmp;
	printf ( "Enter the size of the arr: " );
	scanf ( "%d", &n );
	int arr[n];
	printf ( "Enter the arr elements: ");
	for ( i = 0; i < n; i ++ ) {
		scanf ( "%d", &arr[i] );
	}
	printf ( "\nUnsorted arr: \n" );
	for ( i = 0; i < n; i ++ ) {
		printf ( "%d\t", arr[i]);
	}

	for ( j = n-1; j > 0; j -- ) {
		for ( k = 0; k < j; k ++ ) {
			if ( arr[k] > arr[k + 1] ) {
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}
		}
	}

	printf ( "\nSorted arr: \n" );
	for ( i = 0; i < n; i ++ ) {
		printf ( "%d\t", arr[i]);
	}
	printf ( "\n" );
}
