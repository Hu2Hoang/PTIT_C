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
	char s[1000001]={};
	char res[10000]={};
	res[0]='z'+1;
	scanf("%s",s);
	int leng=strlen(s);
	int t=0;
	fio(i,0,leng){
		while(s[i]>res[t]){
			t--;
		}
		res[++t]=s[i];
	}
	fio(i,1,t+1) printf("%c",res[i]);
	return 0;
}