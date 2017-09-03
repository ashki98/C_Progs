#include<stdio.h>

void main() {
	int n, i, j, k, temp;
	printf ( "Enter the size of the array: " );
	scanf ( "%d", &n );
	int arr[n];
	for ( i = 0; i < n; i ++ ) {
		scanf ( "%d", &arr[i] );
	}

	printf ( "Unsorted arr: \n" );
	for ( i = 0; i < n; i ++ ) {
		printf ( "%d\t", arr[i] );
	}

	for ( j = 0; j < n - 1; j ++ ) {
		for ( k = j + 1; k < n; k ++ ) {
			if ( arr[j] > arr[k] ) {
				temp = arr[j];
				arr[j] = arr[k];
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
