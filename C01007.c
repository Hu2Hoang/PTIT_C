#include<stdio.h>
int main(){
	unsigned int a, b;
	scanf("%d%d", &a, &b);
	float t = (float) a / b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a+b, a-b,(long long) a*b, a/b, a%b, t); 
}