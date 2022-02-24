#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
bool check(char n[]){
		int sum = 0;
		int t = strlen(n) -1;
		for(int j=0;j<=t;++j) sum += n[j]-48;
		if(sum%10==0) return true;
		else return false;
}
int main(){
	w(t){
		char a[11];
		scanf("%s",&a);
		if(check(a)==true) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}