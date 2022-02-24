#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
int main(){
	scanf("%d",&n);
	int end=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			for(int j=1;j<=i;j++){
				end++;
			}
			int tmp=end;
			for(int j=1;j<=i;j++){
				printf("%d ",--tmp+1);
			}
		}
		else{
			for(int j=1;j<=i;j++){
				printf("%d ",++end);
			}
		}
		printf("\n");
	}	
	return 0;
}