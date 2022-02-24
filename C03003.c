#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 10000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=10000000;j+=i){
				prime[j]=1;
			}
		}
	}
}
int n;
int main(){
	sieve();
	int cnt=0;
	scanf("%d",&n);
	int j=2;
	while(cnt<n){
		if(prime[j]==0){
			printf("%d\n",j);
			cnt++;
		}
		j++;
	}
	// for(int i=1;i<=100000;i++){
	// 	if(prime[i]==0){
	// 		cnt++;
	// 		printf("%d\n",i);
	// 		if(cnt==n) break;
	// 	}
	// }	
	return 0;
}