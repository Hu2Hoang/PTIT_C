#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int j,temp,n,i;

int main(){

	w(t){
	int a[1000]={};
		scanf("%d",&n);
		fio(i,0,n){
			scanf("%d",&temp);
			if(temp%2==0) a[i]=temp;
		}
		fio(i,0,n){
			if(a[i]!=0) printf("%d ",a[i]);
		}
		printf("\n");
		i=0;temp=0;n=0;
	}
	return 0;
}
