#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
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
int i;
int main(){
	w(t){
		int a,b;
		long long res=1;
		scanf("%d%d",&a,&b);
		fio(i,a,b){
			res=lcm(i,res);
		}
		printf("%lld\n",res);
	}	
	return 0;
}