#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
//#define w(t) int t;scanf("%d",&t);while(t--)
int i,t;
int main(){
	scanf("%d",&t);
	for(int j=1;j<=t;j++){
		printf("Test %d: ",j);
		int cnt=0;
		int n;scanf("%d",&n);
		fio(i,2,n){
			cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt!=0){
				if(cnt>=1) printf("%d(%d)",i,cnt);
				else printf("%d",i);
				if(n>i) printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}