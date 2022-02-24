#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,j;
int main(){
	w(t){
	scanf("%d",&n);
	int a[100005]={};
	bool check=false;
	fio(i,0,n) scanf("%d",&a[i]);
	fio(i,0,n){
		fio(j,i+1,n){
			if(a[i]==a[j]){
				printf("%d\n",a[i]);
				check=true;
				break;
			}
		}
		if(check) break;
	}
	if(check==false) printf("NO\n");
	}
	return 0;
}