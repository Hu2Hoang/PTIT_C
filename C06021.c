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
int check(char n[]) {
	int leng = strlen(n);
	int sc = 0, sl = 0;
	if (n[0] == '0') return 2;
	for (int i = 0; i < leng; i++) {
		if (n[i] >= '0' && n[i] <= '9'){
			
		}
		else{
			return 2;
			break;
		}
		if (n[i] % 2 == 0) sc++;
		else sl++;
	}
	if ((leng % 2 == 0 && sc > sl)||(leng % 2 != 0 && sl > sc)) return 1;
	return 0;
}
int main() {
	w(t) {
		char n[1005];
		gets(n);
		// printf("%d\n", strlen(n));
		int temp = check(n);
		if (temp == 2) printf("INVALID\n");
		else if (temp == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}