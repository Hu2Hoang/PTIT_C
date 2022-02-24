#include<stdio.h>
#include<math.h>

#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int a;
int main(){
	w(t){
		scanf("%d",&a);
		printf("%lld\n",(long long)a*2);
	}
	return 0;
}
