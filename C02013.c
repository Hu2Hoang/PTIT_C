#include<stdio.h> 
#include <stdlib.h>
#include<stdbool.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
int main(){ 
    int m,n; 
    scanf("%d%d",&n,&m);
    int mmax=max(n,m);
    for(int i = 1; i<=n;i++){ 
        for(int j = 1; j<=m;j++){
            printf("%d", abs((mmax-(i+j-1)))+1); 
        } 
        printf("\n"); 
    }
      return 0;
}
