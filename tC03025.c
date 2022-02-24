#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
bool snt(long long n)
{
	if (n < 2)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (long long i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
} 
bool check(int n){
	while(n!=0){
		int temp=n%10;
		if(!snt(temp)){
			return false;
			break;
		}
		n/=10;
	}
	return true;
}
int main(){
	w(t){
		int l,r,cnt=0;
		scanf("%d%d",&l,&r);
		for(int i=l;i<=r;i++){
			if(snt(i)==0&&check(i)&&snt(tsum(i))==0){
				cnt++;
				//printf("%d ",i);
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}