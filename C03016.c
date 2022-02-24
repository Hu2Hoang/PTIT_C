#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long a[100],i;
long long fb[100];
void init(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
int main() {
	init();
	w(t){
		long long n;
		scanf("%lld",&n);
		bool ok=false;
		for(int i=0;i<=92;i++){
			if(fb[i]==n){
				ok=true;
				break;
			}
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}