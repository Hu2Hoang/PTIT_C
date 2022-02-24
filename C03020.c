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

int main(){
	int a,b;
		scanf("%d%d",&a,&b);
        if(a>b){
            int q=a;a=b;b=q;
        }
		bool c6=false;
		int cnt=0;
		for(int i=a;i<=b;i++){
			int j=i;
			int sum=0,tmp=0,tsum=0;
			while(j>0){
				tmp=j%10;
				if(tmp==6) c6=true;
				sum=sum*10+tmp;
				tsum+=tmp;
				j/=10;
			}
			if(c6&&(sum==i)&&(tsum%10==8)) printf("%d ",i);
			sum=0;tmp=0,j=0;c6=false;tsum=0;
		}
	return 0;
}