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
		char n[20];
		int a[20];
		gets(n);
		int leng = strlen(n);
		for (int i = 0; i < leng; i++) {
			switch (n[i]) {
			case 'I':
				a[i] = 1;
				break;
			case 'V':
				a[i] = 5;
				break;
			case 'X':
				a[i] = 10;
				break;
			case 'L':
				a[i] = 50;
				break;
			case 'C':
				a[i] = 100;
				break;
			case 'D':
				a[i] = 500;
				break;
			case 'M':
				a[i] = 1000;
				break;
			}
		}
		int sum = 0;
		fio(i, 0, leng - 1) {
			if (a[i] < a[i + 1]) sum -= a[i];
			else sum += a[i];
		}
		sum += a[leng - 1];
		printf("%d\n", sum);
	}

	return 0;
}