#include<stdio.h> 
#include <math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){ 
	float a,b,c,d,n1,n2; 
	scanf("%f%f%f",&a,&b,&c); 
	d=pow(b,2)-4*a*c; 
		n1=(-b+sqrt(d))/(2*a); 
		n2=(-b-sqrt(d))/(2*a); 
	if(d<0) printf("NO"); 
	else if(d=0,n1==n2) printf("%.2f",n1); 
		else printf("%.2f %.2f",n1,n2);  
return 0; }