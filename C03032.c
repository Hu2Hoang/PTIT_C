#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
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
bool tsnt(int m){
	int tmp;
	while(m!=0){
		tmp=m%10;
		if(tmp==2||tmp==3||tmp==5||tmp==7){
			m/=10;
			continue;
		}
		else{
			return false;
			break;
		}
		
	}
	return true;
}
int main(){
	sieve();
	w(t){
		int a,b;
		int cnt=0;
		scanf("%d%d",&a,&b);
		fio(i,a,b){
		 	if((prime[i]==0)&&(tsnt(i))) cnt++;
		}
		printf("%d\n",cnt);
		
	}
	// if(tsnt(24)) printf("YES");
	// else printf("NO");	
	return 0;
}