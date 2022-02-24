#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int i,j,n,m,c,d;
int a[105][105];
int main(){
	scanf("%d%d",&n,&m);
	fio(i,1,n){
		fio(j,1,m){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&c,&d);
		fio(j,1,m){
			int temp=a[c][j];
			a[c][j]=a[d][j];
			a[d][j]=temp;
		}
	
	fio(i,1,n){
		fio(j,1,m){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}