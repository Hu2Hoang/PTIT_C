#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp=i;
		printf("%d ",i);
		int cnt=n-1;
		for(int j=2;j<=i;j++){
			tmp+=cnt;
			printf("%d ",tmp);
			cnt--;
		}
		printf("\n");
	}	
	return 0;
}