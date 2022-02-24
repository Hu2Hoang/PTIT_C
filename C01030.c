#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--);
void ptsnt(int n){
    int i = 2;
    while (n>1){
        if (n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        else{
            i++;
        }
    }
}
int main() {
	 int t;scanf("%d",&t);
	 while(t--)
	{
		int n;scanf("%d",&n);
		ptsnt(n);
		printf("\n");
	}
	return 0;
}