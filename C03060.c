#include<stdio.h> 
#include<math.h> 
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//tach n ra n so 2
int gt(int n) {
	int dem=0 ; 
	while(n>1) {
		int t=n ; 
		while(t%2==0) {
			dem++ ;
			t/=2; 
		} 
		n-- ; 
	} 
	return dem ; 
} 
int main() {
	int n,k ; 
	scanf("%d%d",&n,&k) ;
	if(gt(n)>=k) printf("Yes") ; 
	else printf("No") ; 
	return 0;
} 