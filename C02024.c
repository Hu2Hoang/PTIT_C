#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){ 
	int r,c; scanf("%d%d",&r,&c); 
	char chu = 'A'-1 ; 
	for(int i = 1; i<=r;i++){ 
		for(int j = 1;j<=c;j++){ 
			if(i+j <= c+1){ 
				printf("%c",i+j-1+chu); 
			} 
			else{ 
				printf("%c",c+1-j+chu); 
			} 
		} 
		printf("\n"); 
	} 
}