#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i = 0, j = 0, n, m;
int res = -1e9, vth = 0, vtc = 0, resc = -1e9;
int a[105][105];
int main() {
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n", z);
		scanf("%d%d", &n, &m);
		int sumh = 0, sumc = 0;
		fio(i, 1, n) {
			fio(j, 1, m) {
				scanf("%d", &a[i][j]);
			}
		}
		fio(i, 1, n) {
			int hang = i;
			for (int j = 1; j <= m; j++) {
				sumh += a[hang][j];
			}

			if (sumh > res) {
				res = sumh;
				vth = i;
			}
			sumh = 0;
		}
		fio(i, vth, n) {
			fio(j, 1, m) {
				a[i][j] = a[i + 1][j];
			}
		}
		n = n - 1;
		int tmp = 0;
		fio(i, 1, n) {
			tmp = i;
			for (int j = 1; j <= m; j++) {
				if (i != vth) sumc += a[j][i];
				else sumc += 0;
			}

			if (sumc > resc) {
				resc = sumc;
				vtc = tmp;
			}
			sumc = 0; tmp = 0;
		}
		fio(i, 1, n) {
			fio(j, 1, m) {
				if (j != vtc) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}


	return 0;
}