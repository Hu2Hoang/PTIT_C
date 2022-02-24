#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
bool scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return true;
	else return false;
}
bool fibo(int f){
	if(scp(5*f*f+4)||scp(5*f*f-4)) return true;
	else return false;
}
int main(){
	int n;scanf("%d",&n);
	if(fibo(n)) printf("1");
	else printf("0");
	return 0;
}