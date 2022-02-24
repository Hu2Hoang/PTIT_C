#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, j;
int a[105][105], b[105][105], res[105][105];
int main() {
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n", z);

		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j <= i) a[i][j] = j;
				else a[i][j] = 0;
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				b[j][i] = a[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				res[i][j] = 0;
				for (int k = 1; k <= n; k++) {
					res[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		fio(i, 1, n) {
			fio(j, 1, n) {
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}