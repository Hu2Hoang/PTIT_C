#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,n,cnt=0;
int a[105];
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
	int tmp;
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&tmp);
		if(prime[tmp]==0){
			a[++cnt]=tmp;
		}
	}
	printf("%d ",cnt);
	for(int i=1;i<=cnt;i++) printf("%d ",a[i]);
	return 0;
}