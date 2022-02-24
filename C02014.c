#include <stdio.h>
#include <math.h>
//#define max(a,b) (((a)>(b))?(a):(b))
//#define min(a,b) (((a)<(b))?(a):(b))
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int n;scanf("%d",&n);
	for(int i=1-n;i<n;i++){
		for(int j=1-n;j<n;j++){
			printf("%d",max((abs(i)),abs(j))+1 );
		}
		printf("\n");
	}
	return 0;
}
