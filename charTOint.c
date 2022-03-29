
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, a[55] = {};
int main() {
	int cnt = 0;
	char s[1000] = {};
	scanf("%s", s);
	int leng = strlen(s);
	int a[leng];
	fio(i, 0, leng) {
		a[i] = (int)(s[i]);
	}
	bool check = false;
	for (int i = 1; i < leng; i++) {
		check = false;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i]) {
				check = false;
				break;
			}
			else check = true;
		}
		if (check) cnt++;
	}
	fio(i,0,leng) printf("%d ",a[i]);
	printf("%d\n", cnt);
	return 0;
}