#include<stdio.h>

void main() {
	int n,i,key,flag=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++) {
		if(arr[i] == key) {
			printf("Element(%d) found at position %d\n",key,i);
			flag = 1;
		}
	}
	if(flag == 0) {
		printf("Element was not found\n");
	}
}
