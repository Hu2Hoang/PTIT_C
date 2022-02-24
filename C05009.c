#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,j,n,sum=0;
int a[105][105];
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=1;
			}
		}
	}
}
int main(){
	sieve();
	scanf("%d",&n);
	fio(i,0,n){
		fio(j,0,n){
			scanf("%d",&a[i][j]);
		}
	}
	fio(i,0,n){
		fio(j,0,n){
			if(j>=i){
				if(prime[a[i][j]]==0) sum+=a[i][j];
			}
		}
	}
		printf("%d",sum);
	return 0;
}