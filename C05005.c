#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a[15][15];
int i,j;
int main(){
	int t;scanf("%d",&t);
	for(int z=1;z<=t;z++){
		printf("Test %d:\n",z);
		int n,m;
			scanf("%d%d",&n,&m);
		fio(i,0,n){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
				}
		}	
		fio(i,1,n){
		for(int j=1;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	}
	
	return 0;
}