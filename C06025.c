#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, j;
void rev(int a[], int n) {
	int l = 0, r = n - 1;
	while (l < r) {
		int temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++; r--;
	}
}
void sub(char a[], char b[]) {
	int leng1 = strlen(a), leng2 = strlen(b), n = 0;
	int x[leng1], y[leng1], res[leng1];
	fio(i, 0, leng1) x[i] = a[i] - '0';
	fio(i, 0, leng2) y[i] = b[i] - '0';
	rev(x, leng1); rev(y, leng2);
	fio(i, leng2, leng1) y[i] = 0;
	int nho = 0;
	fio(i, 0, leng1) {
		int tmp = x[i] - y[i] - nho;
			if (tmp < 0) {
				nho = 1;
				res[n++] = 10 + tmp;
			}
			else {
				res[n++] = tmp;
				nho=0;
			}
	}
	bool check0 = false;
	for (int i = n - 1; i >= 0; i--) {
		if (!check0 && res[i] != 0) {
			check0 = true;
		}
		if (check0) printf("%d", res[i]);
	}
	if (!check0) printf("0");
}
int main() {
	w(t) {
		char a[1001], b[1001];
		scanf("%s%s", a, b);
		if (strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a, b) > 0)) {
			sub(a, b);
		}
		else sub(b, a);
		printf("\n");
	}
	return 0;
}