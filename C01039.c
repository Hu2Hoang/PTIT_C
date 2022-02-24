#include <stdio.h>
#include <string.h>
char n[1005];
int main(){
	scanf("%s",n);
	if(n[0]=='-') printf("%d",strlen(n)-1);
	else printf("%d",strlen(n));
	return 0;
}