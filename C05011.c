#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, m, j, k;
int a[105][105], b[105][105], res[105][105];
int main() {
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n",z);
		scanf("%d%d", &n, &m);
		fio(i, 0, n) {
			fio(j, 0, m) {
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		int db=n,cb=m;
		fio(i, 0, n) {
			fio(j, 0, n) {
				res[i][j] = 0;
				fio(k, 0, m)
				res[i][j] += a[i][k] * b[k][j];
			}
//	printf("\n");
		}
		fio(i, 0, n) {
			fio(j, 0, n) {
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}