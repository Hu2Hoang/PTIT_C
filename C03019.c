#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i;
int tsum(long long m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
}
bool palin(long long n) {
	int tmp,temp,sum=0;
	temp=n;
	while(n>0){
		tmp=n%10;
		sum=sum*10+tmp;
		n/=10;
	}
	if (temp == sum)
		return true;
	else
		return false;
	return true;
}
int main(){
	w(t){int n;
		scanf("%d",&n);
		int cnt=0;
		long long a=pow(10,n-1),b=pow(10,n);
		for(long long i=a;i<b;i++){
			if(palin(i)&&(tsum(i)%10==0)) cnt++;
		}
		printf("%d\n",cnt);
		cnt=0;
	}
	return 0;
}