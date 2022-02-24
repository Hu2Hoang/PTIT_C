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
long long solve(long long n){
	long long res;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n!=1) res=n;
	return res;
}
int main(){
	w(t){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",solve(n));
	}
	return 0;
}