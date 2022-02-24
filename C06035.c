#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
int main() {
	w(t) {
		char n[25];
		gets(n);
		int leng = strlen(n);
		int cnt = 0;
		for (int i = 0; i < leng / 2; i++) {
			if (n[i] != n[leng - i - 1]) cnt++;
		}
		if (leng % 2 == 0) {
			if ( cnt == 1) printf("YES\n");
			else printf("NO\n");
		}
		else {
			if (cnt==0||cnt == 1) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}