#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int main(){
	w(t){
	int n,p;
	scanf("%d%d",&n,&p);
	int temp,res=0,i=1;
	while(p*i<=n){
		temp=p*i;
		while(temp%p==0){
			temp/=p;
			res++;
		}
		i++;
	}	
	printf("%d\n",res);
	}
	return 0;
}