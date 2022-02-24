#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	char a[11];scanf("%s",&a);
	long long sum = 1;
	int t = strlen(a) -1;
	for(int j=0;j<=t;++j) sum *= a[j]-48;
	printf("%lld",sum);
	return 0;
}