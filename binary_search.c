#include<stdio.h>

void main() {
	int n, key, i, first, mid, last, fl = 0;
	printf("Enter the size of the arr: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the arr elements(should be sorted in ascending order): \n");
	for(i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&key);

	first = 0;
	last = n - 1;

	while( (last >= first) ) {
		mid = ( first + last ) / 2;
		if(key == arr[mid]) {
			printf("Element(%d)found at position %d\n",key,mid);
			fl = 1;
			break;
		}
		else if(key < arr[mid]) {
			last = mid - 1;
		}
		else if(key > arr[mid]) {
			first = mid + 1;
		}
	}
	if(fl = 0) {
		printf("Element(%d) was not found\n",key);
	}
}
