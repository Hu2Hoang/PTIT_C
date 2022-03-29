#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){
	unsigned int a, b;
	scanf("%d%d", &a, &b);
	float t = (float) a / b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a+b, a-b,(long long) a*b, a/b, a%b, t); 
}