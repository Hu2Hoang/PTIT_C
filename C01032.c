#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	w(t){
		int cnt=0;int res=1;
		int n;scanf("%d",&n);
		fio(i,2,n){
			cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt!=0){
				if(cnt>=1) {
					res*=i;
				}
				else{
					res=i;
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}