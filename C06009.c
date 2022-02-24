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
bool check(char a[]) {
	if (a[6] < a[7] && a[7] < a[8] && a[8] < a[10] && a[10] < a[11]) return true;
	return false;
}
bool bangnhau(char a[]) {
	if (a[6] == a[7] && a[7] == a[8] && a[8] == a[10] && a[8] == a[10]) return true;
	return false;
}
bool b3b2(char a[]) {
	bool check1 = false, check2 = false;
	if (a[6] == a[7] && a[7] == a[8]) check1 = true;
	if (a[10] == a[11]) check2 = true;
	if (check1 && check2) return true;
	return false;
}
bool c68(char a[]) {
	if (a[6] != '6' && a[6] != '8') return false;
	if (a[7] != '6' && a[7] != '8') return false;
	if (a[8] != '6' && a[8] != '8') return false;
	if (a[10] != '6' && a[10] != '8') return false;
	if (a[11] != '6' && a[11] != '8') return false;
	return true;
}
int main() {
	w(t) {
		char n[20];
		gets(n);
		if (check(n) || b3b2(n) || c68(n)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}