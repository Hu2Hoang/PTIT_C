#include<stdio.h> 
#include <stdlib.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){ 
    int m,n; 
    scanf("%d%d",&m,&n);
    for(int i = 1; i<=m;i++){ 
        for(int j = 1; j<=n;j++){
            printf("%d", abs(i-j)+1); 
        } 
        printf("\n"); 
    }
      return 0;
}
