#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n,j;
void chuanHoa(char n[]) {
	int leng = strlen(n);
	fio(i, 0, leng) {
		n[i] = tolower(n[i]);
	}
}
int main() {
	char c[1000];
	gets(c);
	chuanHoa(c);
	char a[20][50];
	int n = 0;
	char *token = strtok(c, " ");
	while (token != NULL) {
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	int b[10000]={0};
	fio(i, 0, n) {
		if (b[i] == 0) {
			int cnt=1;
			fio(j, i + 1, n) {
				if (strcmp(a[i], a[j]) == 0) {
					cnt++;
					b[j] = 1;
				}
			}
			printf("%s ", a[i]);
		}

	}
	return 0;
}