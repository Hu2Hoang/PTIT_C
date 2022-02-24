#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	int tt[10]={1000,500,200,100,50,20,10,5,2,1};
	w(t){
		int n,cnt=0;
		scanf("%d",&n);	
		fio(i,0,10){
			cnt+=n/tt[i];
			n%=tt[i];
		}
		printf("%d\n",cnt);
		cnt=0;
	}	
	return 0;
}