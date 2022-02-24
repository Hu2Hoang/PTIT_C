#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long a;
int scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return 0;
	else return 1;
}
int main(){
	w(t){
		scanf("%lld",&a);
		if(scp(a)==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}