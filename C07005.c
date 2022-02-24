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
int main() {
	w(t) {
		float xa, xb, xc, ya, yb, yc;
		scanf("%f%f%f%f%f%f", &xa, &ya, &xb, &yb, &xc, &yc);
		float a = sqrt(pow(fabs(xa - xb), 2) + pow(fabs(ya - yb), 2));
		float b = sqrt(pow(fabs(xc - xb), 2) + pow(fabs(yc - yb), 2));
		float c = sqrt(pow(fabs(xa - xc), 2) + pow(fabs(ya - yc), 2));
		if (a + b > c && b + c > a && a + c > b) printf("%.3f\n", a + b + c);
		else printf("INVALID\n");
	}
	return 0;
}