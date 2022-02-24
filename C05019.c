#include<stdio.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int n, cot, hang, d, i, j;
int a[100][100];
int prime[10000005];
void sieve() {
	prime[0] = prime[1] = 1;
	for (int i = 0; i <= 1000; ++i)
	{
		if (prime[i] == 0) {
			for (int j = i * i; j <= 1000000; j += i) {
				prime[j] = 1;
			}
		}
	}

}
int dd[100005];
int main() {
	sieve();
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n", z);
		scanf("%d", &n);
		int cnt = -1;
		for (int i = 1; i <= 3000; i++) {
			if (prime[i] == 0) dd[++cnt] = i;
		}
		int dem = 1;
		cot = n - 1; hang = n - 1; d = 0;
		cnt = 0;
		while (d <= n / 2) {
			for (i = d; i <= cot; i++) a[d][i] = dd[cnt++];
			for (i = d + 1; i <= hang; i++)	a[i][cot] = dd[cnt++];
			for (i = cot - 1; i >= d; i--) a[hang][i] = dd[cnt++];
			for (i = hang - 1; i > d; i--) a[i][d] = dd[cnt++];
			d++; hang--; cot--;

		}
		fio(i, 0, n) {
			fio(j, 0, n) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}