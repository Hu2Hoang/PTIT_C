#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	char n[100005];
	gets(n);
	int leng=strlen(n);
	printf("%d",leng-1);	
	return 0;
}