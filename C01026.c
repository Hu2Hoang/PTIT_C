#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
bool snt(long long q){
	int temp=0;
	if(q<=1) return false;
	fio(i,2,sqrt(q)){
		if(q%i==0){
			temp++;
		}
		if(temp>0){
			return false;
			break;
		}
	}
	//temp=0;q=0;
	return true;
}
long long n;
int main(){
	w(t){
		scanf("%lld",&n);
		if(snt(n)) printf("YES\n");
		else printf("NO\n");
	}
	n=0;
	return 0;
}
