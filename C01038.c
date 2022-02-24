#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define w(t) int t;scanf("%d",&t);while(t--)

int main(){
		char n[1005];
		scanf("%s",n);
		int leng=strlen(n)-1;
		char temp;
		temp=n[0];
		n[0]=n[leng];
		n[leng]=temp;
		long long res=atoi(n);
		printf("%lld",res);
	return 0;
}
