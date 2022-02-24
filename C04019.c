#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
int main(){
	w(t){
	int end=-1e9;
	int a[105]={},b[30005]={};
	scanf("%d",&n);
	int maxb=-1e9;
	fio(i,0,n){
		scanf("%d",&a[i]);
		end=max(end,a[i]);
		b[a[i]]++;
		maxb=max(maxb,b[a[i]]);
	}
	fio(i,0,n){
		if(b[a[i]]==maxb){
			b[a[i]]=0;
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	maxb=-1e9;
	}
	return 0;
}
