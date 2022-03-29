#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int a,b,i,j;
int main(){
	scanf("%d%d",&a,&b);
	fio(i,1,b){
		fio(j,1,a){
			if(i==1||j==1||i==b||j==a)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
