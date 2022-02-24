#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i;
int cmp(const void *a,const void *b){
	return *(int*)a - *(int*)b;
}
int main(){
	int n,m,j;
	int a[100][100];
	scanf("%d%d",&n,&m);
	fio(i,0,n){
		fio(j,0,m){
			scanf("%d",&a[i][j]);
		}
	}
	fio(i,0,n){
		qsort(a[i],m,sizeof(int),cmp);
	}
	int idx=0;
	for(int k=0;k<m;k++){
	fio(i,0,n){
		fio(j,i+1,n){
			if(a[i][k]<a[j][k]){
				int temp=a[j][k];
				a[j][k]=a[i][k];
				a[j][k]=temp;
			}
		}
	}
}
	fio(i,0,n){
		fio(j,0,m){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}