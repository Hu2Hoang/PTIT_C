#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int shh(int h){
	int res=0;
	for(int i=1;i<=h-1;i++){
		if(h%i==0) res+=i;
	}
	if(res==h) return 0;
	else return 1;
}
int main(){
	int n;scanf("%d",&n);
	if(n>=6&&n<28) printf("6");
	else if(n>=28&&n<496) printf("6 28");
	else if(n>=496&&n<8128) printf("6 28 496");
	else printf("6 28 496 8128");
	return 0;
}