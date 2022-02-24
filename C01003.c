#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long a;
int main(){
	w(t){
		scanf("%lld",&a);
		printf("%lld\n",(long long)a*a);
	}
	return 0;
}
