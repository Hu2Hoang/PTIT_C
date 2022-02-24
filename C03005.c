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
int i,j;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	fio(i,a,b){
		fio(j,i+1,b){
			if(gcd(i,j)==1) printf("(%d,%d)\n",i,j);
		}
	}
	return 0;
}