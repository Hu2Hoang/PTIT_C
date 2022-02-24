#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
} 
int ptsnt(int n){
	int sumsnt=0;
    int i = 2;
    while (n>1){
        if (n%i==0){
        	sumsnt+=tsum(i);
            //printf("%d ",i);
            n=n/i;
        }
        else{
            i++;
        }
    }
    return sumsnt;
}

int main(){
		int n;scanf("%d",&n);
		if(ptsnt(n)==tsum(n)) printf("YES");
		else printf("NO");
	return 0;
}