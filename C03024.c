#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long check(char n[]){
		int sum = 0;
		int t = strlen(n) -1;
		for(int j=0;j<=t;++j) sum += n[j]-48;
		return sum;
}
int main(){
	char a[10],b[10];
	scanf("%s%s",&a,&b);
	if(check(a)>check(b)) printf("%s %s",b,a);
	else printf("%s %s",a,b);
	return 0;
}