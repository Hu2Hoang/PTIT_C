#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,a[55]={};
int main(){
	w(t){
		int cnt=0;
		scanf("%d",&n);
		fio(i,0,n) scanf("%d",&a[i]);
		bool check=false;
		for(int i=1;i<n;i++){
			check=false;
			for(int j=0;j<i;j++){
				if(a[j]>=a[i]){
					check=false;
					break;
				}
				else check=true;
			}
			if(check) cnt++;
		}
		printf("%d\n",cnt+1);
	}	
	return 0;
}