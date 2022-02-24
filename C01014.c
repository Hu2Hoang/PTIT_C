#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
double a,b;
int main(){
	scanf("%lf%lf",&a,&b);
	if(a==0&&b==0) printf("Vo so nghiem");
	if(a==0&&b!=0) printf("Vo nghiem");
	if(a!=0){
		//here
		if(b==0) printf("0.00");
		else printf("%.2lf",-b/a);
	}
	return 0;
}