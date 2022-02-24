#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int gcd(long long a, long long b){
	long long x;
	while(b>0){
		x=a%b;
		a=b;
		b=x;
	}
	return a;
}
int a,b;
int main(){
	w(t){
		scanf("%d%d",&a,&b);
		printf("%d\n",gcd(a,b));
	}
	return 0;
}