#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){ 
	int k; 
	scanf("%d", &k); 
	getchar(); 
	while(k--){ 
		char A[500]; 
		gets(A); 
		bool c1=true,c2=true;
		int i, dem=0, dem1=0; 
		for(i=0;i<strlen(A)-1;i++){ 
			if(A[i]%2!=0) {
				c1=false; 
				break;
			}
			if(A[i]!=A[strlen(A)-1-i]){ 
				c2=false; 
				break;
			}
		} 
		if(c1&&c2) printf("YES\n"); 
		else printf("NO\n"); 
	} 
	return 0;
}