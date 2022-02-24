#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	w(t){
		long long n;bool check=true;
		int temp=0;
		scanf("%lld",&n);
		if(n%2==0){
			while(n!=0){
				temp=n%10;
				if(temp%2!=0){
					check=false;
					break;
				}
				else check=true;
				n/=10;				
			}
		}
		else check=false;
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}