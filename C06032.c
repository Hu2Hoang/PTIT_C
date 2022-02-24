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
int cmp(const void *a,const void *b){
	char x[100],y[100],z[100],t[100];
	strcpy(x,(char *)a);strcpy(z,x);
	strcpy(y,(char *)b);strcpy(t,y);
	strcat(x,y);
	strcat(t,z);
	if(strcmp(x,t)>0) return 1;
	else return -1;
}
int main(){
	w(t){
	scanf("%d",&n);
	char a[15][20];
	fio(i,0,n){
		scanf("%s",a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	fio(i,0,n) printf("%s",a[i]);
	printf("\n");
}
	return 0;
}