#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n][n];

	arr[n-1][n-1] = 2003;

	printf("size of array : %ld bytes \n", sizeof(arr));
	printf("All is well\n");
}
