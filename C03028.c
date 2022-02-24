#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int ckn(int n,int k){
	int th=1;
	for(int i=1;i<=k;i++){
		th=th*n/i;
		n--;
	}
	return th;
}
int i,j;
int main(){
	int n;
	scanf("%d",&n);
	fio(i,0,n){
		for(int j=0;j<=i;j++){
			printf("%d ",ckn(i,j));
		}
		printf("\n");
	}
	return 0;
}