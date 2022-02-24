#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);;getchar();while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
int check(char n[]) {
	int leng = strlen(n);
	if (n[0] == '0') return 2;
	bool t0 = false, t1 = false, t2 = false, t3 = false, t4 = false, t5 = false, t6 = false, t7 = false, t8 = false, t9 = false;
	for (int i = 0; i < leng; i++) {
		if (n[i] >= '0' && n[i] <= '9') {
			switch (n[i]) {
			case '0':
				t0 = true; break;
			case '1':
				t1 = true; break;
			case '2':
				t2 = true; break;
			case '3':
				t3 = true; break;
			case '4':
				t4 = true; break;
			case '5':
				t5 = true; break;
			case '6':
				t6 = true; break;
			case '8':
				t8 = true; break;
			case '7':
				t7 = true; break;
			case '9':
				t9 = true; break;
			}
		}
		else {
			return 2;
			break;
		}

	}
	if (t1 && t2 && t3 & t4 && t5 && t6 && t7 && t8 && t9) return 1;
	else return 0;
}
int main() {
	w(t) {
		char n[1005];
		gets(n);
		int tmp = check(n);
		if (tmp == 0) printf("NO\n");
		else if (tmp == 1) printf("YES\n");
		else printf("INVALID\n");
	}

	return 0;
}