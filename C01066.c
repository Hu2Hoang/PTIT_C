#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define min(a,b) (((a)<(b))?(a):(b))
int a,b,c;
int main(){
	scanf("%d%d%d",&a,&b,&c);
	int res=min(min(a,b),c);
	printf("%d",res);
	return 0;
}