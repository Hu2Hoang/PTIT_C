#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long scp(long long p){
	if(sqrt(p)==(long long)sqrt(p)) return 0;
	else return 1;
}
long long m,n;
int res[1000005];
int main(){
	int cnt=0;
	scanf("%lld%lld",&m,&n);
	for(long long i=m;i<=n;i++){
		if(scp(i)==0&&i!=0){
			res[++cnt]=i;
		}
	}
	printf("%d\n",cnt);
	for(int j=1;j<=cnt;j++) printf("%lld\n",res[j]);
	return 0;
}