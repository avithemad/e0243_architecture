#include<stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	long a[n][n], b[n][n];
	long long c[n][n];

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%ld", &a[i][j]);
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%ld", &b[i][j]);
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			long long temp = 0;
			for (int k=0; k<n; k++) {
				temp = temp + a[i][k]*b[j][k];
			}
			printf("c[%d][%d] = %lld\n", i, j, temp);
			c[i][j] = temp;
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%lld\t", c[i][j]);
		}
		printf("\n");
	}
}
