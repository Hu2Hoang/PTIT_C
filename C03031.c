#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,i,j;
long long gcd(long long a, long long b){
	long long x;
	while(b>0){
		x=a%b;
		a=b;
		b=x;
	}
return a;
}
int main(){
	w(t){
		long long a,b,c,d;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		if(gcd(a,b)==gcd(c,d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}