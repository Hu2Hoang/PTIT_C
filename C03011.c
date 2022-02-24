#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,a,b;
int gt(int t)
{
    int gt = 1;
    for (int g = 2; g <= t; g++)
    {
        gt *= g;
    }
    return gt;
}
long long tsum(long long q){
	long long res=0;
	while(q!=0){
		int temp;
		temp=q%10;
		res+=gt(temp);
		q/=10;
	}
	return res;
}
int main(){
	scanf("%d%d",&a,&b);
	if(a>b){int temp=a;a=b;b=temp;}
	fio(i,a,b){
		if(tsum(i)==i) printf("%d ",i);
	}
	
	return 0;
}