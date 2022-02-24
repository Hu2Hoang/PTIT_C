#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	w(t){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int temp1,temp2;
		temp1=c-a;temp2=d-b;
		if((float)temp1/temp2==-1||(float)temp1/temp2==1) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}