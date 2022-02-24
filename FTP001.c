#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,j,n;
int main(){
	int n;scanf("%d",&n);
	fio(i,0,n){
		for(int j=0;j<=i;j++) printf("0 ");
		fio(j,1,n-i){
			printf("%d ",j);
		}
		printf("\n");
	}	
	return 0;
}