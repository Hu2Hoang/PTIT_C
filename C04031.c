#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int i,j;
int main() { 
	int z;
	int t;scanf("%d",&t);
	fio(z,0,t){
		printf("Test %d:\n",z+1);
		int n;scanf("%d",&n);
		int a[n],b[n];
		fio(i,0,n){
			scanf("%d",&a[i]);
			b[i]=1;
		}
		fio(i,0,n-1){
			fio(j,i+1,n){
				if(a[j]>a[j-1]){
					b[i]++;
				}
				else{
					i=j-1;
					break;
				}
			}
		}
		int m=0;
		fio(i,0,n){
			m=max(m,b[i]);
		}
		printf("%d\n",m);
		fio(i,0,n){
			if(b[i]==m){
				fio(j,i,m+i){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}