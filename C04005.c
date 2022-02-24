#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,j,mmax=0;
int main(){
	w(t){
		int n;scanf("%d",&n);
		int a[1005]={};
		fio(i,0,n){
			scanf("%d",&a[i]);
			mmax=max(mmax,a[i]);
		}
		printf("%d\n",mmax);
		fio(i,0,n){
			if(a[i]==mmax) printf("%d ",i);
		}
		printf("\n");
		mmax=0;
	}
	return 0;
}
