#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long i,n;
long long a[100];
int main(){
	long long n;scanf("%lld",&n);
	long long fi=0,bi=1;
	fio(i,0,n){
		//printf("%lld ",fi); 
		a[i]=fi;
		//cout << f << " "; 
		fi += bi; 
		bi = fi - bi; 
	}
	fio(i,0,n) printf("%lld ",a[i]);
	return 0;
}