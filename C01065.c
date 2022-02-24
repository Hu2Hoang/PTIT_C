#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
#define ll long long
ll rev(ll n){
	ll res=0;
	while(n){
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
void dem(long long n){
	int c2=0,c3=0,c5=0,c7=0;
	long long m=rev(n);
	while(n){
		int temp=n%10;
		if(temp==2) c2++;
		else if(temp==3) c3++;
		else if(temp==5) c5++;
		else if(temp==7) c7++;
		n/=10;
	}
	while(m){
		int temp=m%10;
		if(temp==2&&c2!=0){
				printf("2 %d\n",c2); 
				c2=0;
		}
		else if(temp==3&&c3!=0){
			printf("3 %d\n",c3); 
				c3=0;
		}
		else if(temp==5&&c5!=0){
			printf("5 %d\n",c5);
			c5=0;
		}
		else if(temp==7&&c7!=0){
			printf("7 %d\n",c7); 
				c7=0;
		}
		m/=10;
	}
}
long long i,n;
int main(){
	scanf("%lld",&n);
	dem(n);
	return 0;
}