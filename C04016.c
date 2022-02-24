#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int prime[100005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=100000;j+=i){
				prime[j]=1;
			}
		}
	}
}
int i;
int main(){
	sieve();
	int t;scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int cnt=0;
		printf("Test %d:\n",j);
		int n;scanf("%d",&n);
		int a[100005]={},dd[100005]={};
		int temp;
		fio(i,0,n){
			scanf("%d",&temp);
			if(prime[temp]==0){
				if(cnt<temp) cnt=temp;
				dd[temp]++;
			}
		}
		for(int i=1;i<=cnt;i++)
			if(dd[i]>0) printf("%d xuat hien %d lan\n",i,dd[i]);
		
		temp=0,n=0;cnt=0;	
	}
	return 0;
}