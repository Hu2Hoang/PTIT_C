#include<stdio.h>
#define fio(i,a,b) for(long long i=a;i<=b;i++)
#define max(a,b) (((a)>(b))?(a):(b))
long long i,n,res,sum=0;
long long a[100005]={};

int main(){
	int t;scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	fio(i,1,n) scanf("%lld",&a[i]);
	res=a[1];
	fio(i,1,n){
		if(sum+a[i]<0){
			sum=0;
			continue;
		}
		sum+=a[i];
		//if(sum>res) res=sum;
		res=max(res,sum);
	}
	printf("%lld\n",res);
	res=0;sum=0;
	}
	return 0;
}