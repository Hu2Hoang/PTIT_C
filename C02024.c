// #include<stdio.h>
// #include <string.h>
// #include<stdlib.h>
// #define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
// #define w(t) int t;scanf("%d",&t);while(t--)
// int main(){ 
// 	int a,b; 
// 	scanf("%d%d",&a,&b); 
// 	int i,j,k; 
// 	fio(i,1,a){ 
// 		fio(j,i,b){ 
// 			printf("%c",j+64);
// 		} 
// 		if(i>b){ 
// 			printf("%c",b+64); 
// 			for(j=(b-1);j>0;j--){ 
// 				printf("%c",j+64); 
// 			} 
// 		}
// 		else{ 
// 			for(j=(i-1);j>0;j--){ 
// 				printf("%c",j+64); 
// 			} 
// 		}
// 		printf("\n"); 
// 	}
// 	return 0; 
// }
#include<stdio.h> 
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