#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
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
// for(int i=1;i<=n;i++){
// 			if(prime[i]==0) printf("%d ",i);
// }
int i,j;
int main(){
	sieve();
	w(t){
		int n;scanf("%d",&n);
		int temp=0;
		fio(i,0,n){
			scanf("%d",&temp);
			if(prime[temp]==0) printf("%d ",temp);
		}
		printf("\n");
	}
	return 0;
}