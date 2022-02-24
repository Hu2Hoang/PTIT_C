#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,cnt=0;
bool check(int n){
	while(n!=0){
		int temp=n%10;
		if(temp==9){
			return false;
			break;
		}
		n/=10;
	}
	return true;
}
bool palin(int n) {
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
	int n;scanf("%d",&n);
	fio(i,2,n){
		if(check(i)&&palin(i)){
			printf("%d ",i);
			cnt++;
		}
	}
	// if(palin(99)) printf("YES");
	// else printf("NO");
	printf("\n%d",cnt);	
	return 0;
}