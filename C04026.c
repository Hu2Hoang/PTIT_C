#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,j,z;
int a[10005];
int main(){
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a[i]);
	}
	fio(i,0,n-1){
		int tmp=i;
		for(int j=i+1;j<n;j++){
			if(a[tmp]>a[j]){
				int temp=a[tmp];
				a[tmp]=a[j];
				a[j]=temp;
			}
		}
		printf("Buoc %d: ",i+1);
		fio(z,0,n)	printf("%d ",a[z]);
		printf("\n");
	}
	return 0;
}