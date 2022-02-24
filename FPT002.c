#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n, m, j, k,l,p,q;
int a[105][105], b[105][105], c[105][105],temp[105][105],res[105][105];
void tichmatrx(int a[105][105],int b[105][105],int temp[105][105],int m,int n, int p){
	fio(i,0,m){
		fio(j,0,p){
			fio(l,0,n){
				temp[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
}
int main() {
	scanf("%d%d%d%d",&m,&n,&p,&q);
	fio(i,0,m){
		fio(j,0,n){
			scanf("%d",&a[i][j]);
		}
	}
	fio(i,0,n){
		fio(j,0,p) scanf("%d",&b[i][j]);
	}
	fio(i,0,p){
		fio(j,0,q) scanf("%d",&c[i][j]);
	}
	tichmatrx(a,b,temp,m,n,p);
	tichmatrx(temp,c,res,m,p,q);
		fio(i,0,m){
		fio(j,0,q){
			printf("%d ",res[i][j]);
		}
		//printf("%d",temp[i][j]);
		printf("\n");
	}
	return 0;
}