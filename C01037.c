#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a,b,i;
int main(){
	scanf("%d%d",&a,&b);
	if(a>b){
		int temp = a;
		a=b;
		b=temp;
	}
	long long sum=0;
	fio(i,a,b) sum+=i;
	printf("%lld",sum);
	return 0;
}