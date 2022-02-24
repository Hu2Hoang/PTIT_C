#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	w(t){
		bool check=true;
		int a[105]={};
		int n;
		scanf("%d",&n);
		fio(i,0,n) scanf("%d",&a[i]);
		fio(i,0,n){
			if(a[i]!=a[n-i-1]) check=false;
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}