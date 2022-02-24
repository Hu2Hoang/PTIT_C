#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}
//Boi chung nho nhat
int lcm(int d, int c) {
	int x;
	x = gcd(d, c);
	return (d * c) / x;
}
struct ps
{
	int tu, mau;
};
typedef struct ps ps;
ps rutgon(ps a) {
	int uoc = gcd(a.tu, a.mau);
	a.tu /= uoc;
	a.mau /= uoc;
	return a;
}
void solve( ps a, ps b) {
	a = rutgon(a); b = rutgon(b);
	int mc = lcm(a.mau, b.mau);
	a.tu = mc / a.mau * a.tu;
	b.tu = mc / b.mau * b.tu;
	a.mau = b.mau = mc;
	printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	ps tong, thuong;
	tong.tu = a.tu + b.tu;
	tong.mau = mc;
	tong = rutgon(tong);
	printf("%d/%d\n", tong.tu, tong.mau);
	thuong.tu = a.tu * b.mau;
	thuong.mau = b.tu * a.mau;
	thuong = rutgon(thuong);
	printf("%d/%d\n", thuong.tu, thuong.mau);
}
int main() {
	int t; scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		ps a, b;
		printf("Case #%d:\n", i);
		scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
		solve(a, b);
	}
	return 0;
}