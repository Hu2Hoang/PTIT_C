#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,j,n;
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 100; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=100000;j+=i){
				prime[j]=1;
			}
		}
	}
}
int res=-1e9,vt=0;
int a[105][105];
int main(){
	sieve();
	scanf("%d",&n);
	fio(i,1,n){
		fio(j,1,n){
			scanf("%d",&a[i][j]);
		}
	}
	int cnt=0;
	fio(i,1,n){
		for(int j=1;j<=n;j++){
			if(prime[a[i][j]]==0) cnt++;
		}

		if(cnt>res){
			res=cnt;
			vt=i;
		}
		cnt=0;

	}
	printf("%d\n",vt);
	fio(j,1,n){
		if(prime[a[vt][j]]==0) printf("%d ",a[vt][j]);
	}
	return 0;
}