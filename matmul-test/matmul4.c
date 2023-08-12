#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;

	scanf("%d", &n);

	int** a = (int**)malloc(sizeof(int*)*n);
	int** b = (int**)malloc(sizeof(int*)*n);

	for (int i=0; i<n; i++) {
		a[i] = (int*)malloc(sizeof(int)*n);
		for (int j=0; j<n; j++) {
			scanf("%d", &a[i][j]);
		}	
	}
	for (int i=0; i<n; i++) {
		b[i] = (int*)malloc(sizeof(int)*n);
		for (int j=0; j<n; j++) {
			scanf("%d", &b[i][j]);
		}	
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int temp = 0;
			for (int k=0; k<n; k++) {
				temp+=(a[i][k]*b[j][k]);
			}
		//	printf("%d\t", temp);
		}
		//printf("\n");
	}

	free(a);
	free(b);
}
