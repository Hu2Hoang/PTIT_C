#include<stdio.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int n, cot, hang, d, i, j;
int a[100][100];
int main() {
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n", z);
		scanf("%d", &n);
		int dem = n * n;
		cot = n - 1; hang = n - 1; d = 0;
		while (d <= n / 2) {
			for (i = d; i <= cot; i++) a[d][i] = dem--;
			for (i = d + 1; i <= hang; i++)	a[i][cot] = dem--;
			for (i = cot - 1; i >= d; i--) a[hang][i] = dem--;
			for (i = hang - 1; i > d; i--) a[i][d] = dem--;
			d++; hang--; cot--;

		}
		fio(i, 0, n) {
			fio(j, 0, n) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

	}
	return 0;
}