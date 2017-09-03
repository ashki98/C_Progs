#include<stdio.h>

void main() {
	int n, i, j, k, temp;
	printf ( "Enter the size of the arr: " );
	scanf ( "%d", &n );
	int arr[n];
	for ( i = 0; i < n; i ++ ) {
		scanf ( "%d", &arr[i] );
	}

	printf ( "Unsorted arr: \n" );
	for ( i = 0; i < n; i ++ ) {
		printf ( "%d\t", arr[i] );
	}

	for ( j = 1; j < n; j ++ ) {
		for ( k = j; k > 0; k -- ) {
			if ( arr[k - 1] > arr[k] ) {
				temp = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = temp;
			}
		}
	}

	printf ( "\nSorted arr: \n" );
	for ( i = 0; i < n; i ++ ) {
		printf ( "%d\t", arr[i] );
	}
	printf ( "\n" );
}
