#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int i,j;
int main(){
	int n;scanf("%d",&n);
	fio(i,1,n){
		for(int j=1;j<=i;j++){
			if(i==1||i==n||i==j||j==1) printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}