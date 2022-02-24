#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
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
	int a,b;scanf("%d%d",&a,&b);
	if(a>b){
		int temp=a;a=b;b=temp;
	}
	fio(i,a,b){
		if(shh(i)==0) printf("%d ",i);
	}
	return 0;
}