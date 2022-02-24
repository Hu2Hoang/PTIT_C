#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
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
		int n;scanf("%d",&n);
		long long res=1;
		for(int i=1;i<=n;i++){
			res=lcm(res,i);
		}
		printf("%lld\n",res);
	}
	return 0;
}