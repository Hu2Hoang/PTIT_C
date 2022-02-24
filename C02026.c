#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, j, m;
int main() {
	scanf("%d%d", &n, &m);
	if (n <= m) {
		for(int i=n-1;i>=0;i--) {
			int d = i; 
			for (int j = m-1; j >= 0; j--) {
				if (d <= m - 1) {
					d++;
					printf("%c", d+64);
					
				}
				else printf("%c", d+64);
			}
			printf("\n");
		}
	}
	if(n>m){
		for(int i=n-1;i>=0;i--){
			int d = i; 
			for (int j = m-1; j >= 0; j--) {
				if (d <= m - 1) {
					printf("%c", d+1+64);
					d++;
				}
				else printf("%c", m+64);
			}
			printf("\n");
		}
	}
	return 0;
}