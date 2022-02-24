#include <stdio.h>
#include <string.h>
#define w(t) int t;scanf("%d",&t);while(t--)

int main(){
	w(t){
		char n[1005];
		scanf("%s",n);
		int leng=strlen(n)-1;
		if(n[0]==n[leng]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
