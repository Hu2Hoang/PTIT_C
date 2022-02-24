#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){ 
	int a,b; 
	scanf("%d%d",&a,&b); 
	int i,j,k; 
	fio(i,1,a){ 
		fio(j,i,b){ 
			printf("%d",j);
		} 
		if(i>b){ 
			printf("%d",i); 
			for(j=(i-1);j>i-b;j--){ 
				printf("%d",j); 
			} 
		}
		else{ 
			for(j=(b-1);j>(b-i);j--){ 
				printf("%d",j); 
			} 
		}
		printf("\n"); 
	}
	return 0; 
}