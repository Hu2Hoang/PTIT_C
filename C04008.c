
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, m, z, j;
int a[10005], b[10005];
int main() {
	int t; scanf("%d", &t);
	fio(z, 1, t) {
		printf("Test %d:\n", z);
		int k;
		scanf("%d%d%d", &n, &m,&k);
		fio(i, 1, n) scanf("%d", &a[i]);
		fio(i, 1, m) scanf("%d", &b[i]);
			fio(i, 1, k) printf("%d ", a[i]);
			fio(i, 1, m) printf("%d ", b[i]);
			fio(i, k + 1, n) printf("%d ", a[i]);
		printf("\n");
	}

	return 0;
}
