#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i*2-1;j+=2){
			printf("%d",j);
		}
		for(int j=i*2-3;j>=1;j-=2) printf("%d",j);
		printf("\n");
	}	
	return 0;
}