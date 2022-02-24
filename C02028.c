#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	int i,n,j;
	scanf("%d",&n);	
	int cnt=1;
	for(int i=1;i<=(n*2-1);i+=2){
		for(int j=i;j<=(n*2-1);j+=2){
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}