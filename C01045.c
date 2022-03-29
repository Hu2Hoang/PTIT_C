#include<stdio.h>
#include<math.h>
#include <string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){
	char n[1005];
	scanf("%s",n);
	int leng=strlen(n)-1;
	printf("%c %c",n[0],n[leng]);
	return 0;
}
