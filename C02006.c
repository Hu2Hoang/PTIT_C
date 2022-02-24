#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,m,i,j;
int main(){
	scanf("%d%d",&n,&m);
	fio(i,1,n){
		for(int j=2;j<=i;j++) printf("~");
		for(int j=1;j<=m;j++){
			if(i==1||i==n||j==1||j==m) printf("*");
			else printf(".");
		}

		printf("\n");
	}
	return 0;
}