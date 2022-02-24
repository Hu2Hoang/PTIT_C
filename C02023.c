#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,m;
int main(){
	scanf("%d%d",&n,&m);
	if(n<=m){
		for(int i=m;i>=(m-n+1);i--){
		int d=n+1;
		for(int j=m;j>=1;j--){
			printf("%c",max(i,j)+96);
			//else printf("%d ",max(i,j));
		}
		printf("\n");
		}
	}
	else{
		for(int i=n;i>=(1);i--){
		int d=n+1;
		for(int j=n;j>=(n-m+1);j--){
			printf("%c",max(i,j)+96);
		}
		printf("\n");
		}
	}
	return 0;
}