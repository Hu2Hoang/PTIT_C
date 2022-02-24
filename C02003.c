#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,i,j;
int main(){
	scanf("%d",&n);
	fio(i,1,n){
		fio(j,1,n){
			if(i==1||j==1||i==n||j==n)printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}