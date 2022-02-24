#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
float a;
int main(){
	scanf("%f",&a);
	float res=(a*9/5)+32;
	printf("%.2f",res);
	return 0;
}