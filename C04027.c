#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,z,j;
int a[10005];
int main(){
	scanf("%d",&n);
	fio(i,0,n) scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++){
		int vti=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[vti]) vti=j;
		}
		int temp=a[vti];
		a[vti]=a[i];
		a[i]=temp;
		printf("Buoc %d: ",i+1);
		fio(z,0,n) printf("%d ",a[z]);
		printf("\n");
	}
	return 0;
}