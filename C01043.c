#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int gt(int t)
{
    int gt = 1;
    for (int g = 2; g <= t; g++)
    {
        gt *= g;
    }
    return gt;
}
int main(){
	char a[11];scanf("%s",&a);
	long long sum = 0;
	int t = strlen(a) -1;
	for(int j=0;j<=t;++j) sum += gt(a[j]-48);
	long long temp=atoi(a);
	if(sum==temp) printf("1");
	else printf("0");
	return 0;
}