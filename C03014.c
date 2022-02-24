#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long gcd(long long a, long long b){
	long long x;
	while(b>0){
		x=a%b;
		a=b;
		b=x;
	}
	return a;
}
//Boi chung nho nhat
long long lcm(long long d, long long c){
	long long x;
	x=gcd(d,c);
	return (d*c)/x;
}
int main(){
	w(t){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",lcm(a,b),gcd(a,b));
	}
	return 0;
}