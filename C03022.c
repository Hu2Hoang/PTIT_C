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
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
} 
int i;
int main(){
	sieve();
	int cnt=0;
	int n;scanf("%d",&n);
	fio(i,0,n){
		if(prime[i]==0&&(tsum(i)%5==0)){
			cnt++;
			printf("%d ",i);
		}
	}
	printf("\n%d",cnt);
	return 0;
}