#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,i,j;
int main(){
	scanf("%d",&n);
	fio(i,1,n){
		for(int j=1;j<=n-i;j++) printf("~");
		for(int j=1;j<=n;j++) printf("*");
		printf("\n");
	}
	return 0;
}