#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a[105];
int i,j;
int main(){
	int n,temp;
	scanf("%d",&n);
	fio(i,1,n) {
		scanf("%d",&a[i]);	
	}
	fio(i,1,n-1){
		fio(j,i+1,n){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	fio(i,1,n){
		printf("%d ",a[i]);
	}
	return 0;
}