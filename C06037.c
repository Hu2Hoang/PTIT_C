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
int i,n;
int main(){
	int a[127]={0},b[127]={0},check[127]={0};
	char s[127];
	scanf("%s",s);
	int i,j;
	int leng=strlen(s);
	for (i=0;i<leng;i++){
		if(check[s[i]]==0) {
			a[s[i]]=i;
			check[s[i]]=1;
		}
		else b[s[i]]=i;
	}
	int count=0;
	for (i=65;i<=90;i++)
	{
		for (j=65;j<=90;j++)
			if(a[i]<a[j] && a[j]<b[i] && b[i]<b[j]) count++;
	}
	printf("%d",count);
	return 0;
}  