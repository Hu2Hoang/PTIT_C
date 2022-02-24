
#include<stdio.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int n, cot, hang, d, i, j;
int a[100][100];
long long fibo(int n){ 
	long long f[100];
	 int i; 
	 // if(n<2){ 
	 // 	return 1; 
	 // } 
	 //else{ 
	 	f[0]=0;
	 	f[1]=1;
	 	f[2]=1;
	 	for(i=3;i<=n;i++){ 
	 		f[i]=f[i-2]+f[i-1]; 
	 	} 
	 	return f[n]; 
	 //} 
}
int dd[100005];
int main() {
		scanf("%d", &n);
		int cnt = -1;
		for (int i = 0; i <= 82; i++) {
		 	dd[++cnt] = fibo(i);
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
	return 0;
}