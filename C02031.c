#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	int i,n,j;
	scanf("%d",&n);	
	int cnt=1;
	for(int i=n-1;i>=0;i--){
		for(int j=i;j<=(i*2);j++){
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}