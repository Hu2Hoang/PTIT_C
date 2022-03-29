#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			for(int j=1;j<=(i*2-1);j+=2) printf("%d",j);
		}
		else{
			for(int j=2;j<=(i*2);j+=2) printf("%d",j);
		}
	printf("\n");
	}	
	return 0;
}