#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a;
int main(){
	w(t){
		scanf("%d",&a);
		printf("%.15lf\n",(double)1/a);
	}
	return 0;
}
