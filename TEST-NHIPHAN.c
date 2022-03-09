#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int n, i;
int a[10000] = {};
int main() {
	scanf("%d", &n);
	if (n == 0) printf("0");
	else {
		int res = 0;
		for ( i = 0; n > 0; i++) {
			a[++res] = n % 2;
			n /= 2;
		}
		for ( i = res; i > 0; i--) printf("%d", a[i]);
	}
	return 0;
}