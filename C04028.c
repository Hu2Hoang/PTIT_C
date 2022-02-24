#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, j,z;
int a[1005];
int main() {
	scanf("%d", &n);
	fio(i, 0, n) {
		scanf("%d", &a[i]);
		for(int j=0;j<=i;j++){
			if(a[i]<=a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("Buoc %d: ",i);
		for(int z=0;z<=i;z++) printf("%d ",a[z]);
		printf("\n");
	}
	return 0;
}