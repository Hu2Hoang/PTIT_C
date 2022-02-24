     
#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--);
int prime[10000005];
void sieve(){
    for(int i=1;i<=2000000;i++){
        prime[i]=i;
    }
    for(int i=2;i<=sqrt(2000000);i++){
        if(prime[i]){
            for(int j=i*i;j<=2000000;j+=i){
                if(prime[j]==j){
                    prime[j]=i;
                }
            }
        }
    }
}
int ptsnt(int n){
	int sum=0;
   while(n!=1){
   
    int tmp=1;
	tmp=prime[n];
    while(n%tmp==0){

        sum+=tmp;
        n/=tmp;
    }
   }
   return sum;
}
int main() {
    sieve();
	 int t;scanf("%d",&t);
	long long res=0;
	for(int z=1;z<=t;z++)
	{
		int n;scanf("%d",&n);
		res+=ptsnt(n);
	}
	printf("%lld",res);
	return 0;
}