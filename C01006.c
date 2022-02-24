#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a,b;
int main(){
		scanf("%d%d",&a,&b);
		if(b==0) printf("0");
		else{
			printf("%d %d %d %.2f %d",a+b,a-b,a*b,(float)a/b,a%b);
		}
		
	return 0;
}