#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int main(){ 
	int t; scanf("%d", &t); 
	while (t--){ 
		int n; scanf("%d",&n); 
		int i=1; int count = 0; 
		while (i<=n/i) { 
			if(n%i==0){
			 if (i%2==0) count++; 
			 if (n/i%2==0) count++; 
			 if (n/i==i && i%2==0) count--; 
			 //8 -> 4(+1) n%i = 4 ->(+1) ==> count-- 
			} 
			i++; 
		} 
		printf ("%d\n", count); 
	} 
	return 0; 
}