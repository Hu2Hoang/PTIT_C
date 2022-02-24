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
	scanf("%d",&n);
	int u,d;
	int sumu=0,sumd=0,minu=1e9,mind=1e9;
	fio(i,0,n){
		scanf("%d%d",&u,&d);
		sumu+=u;
		sumd+=d;
		minu=min(minu,u);
		mind=min(mind,d);
	}	
	int r1=sumd+minu;
	int r2=sumu+mind;
	if(r1>r2) printf("%d",r1);
	else printf("%d",r2);
	return 0;
}