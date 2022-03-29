#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int a;
int main(){
	scanf("%d",&a);
	fio(i,1,10){
		printf("%d ",a*i);
	}
	return 0;
}
