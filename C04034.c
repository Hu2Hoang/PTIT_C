#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	w(t){
		int a[1005]={};int n;
		scanf("%d",&n);
		fio(i,0,n) scanf("%d",&a[i]);
		fio(i,0,n){
			bool check=false;
			int temp=a[i];
			for(int j=i+1;j<=n;j++){
				if(temp>a[j]){
					check=true;
				}
				else{
					check=false;
					break;
				}
			}
			if(check) printf("%d ",temp);
			check=false;
		}
		printf("\n");
	}	
	return 0;
}