#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,n,temp;
int a[105];
int main(){
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--) printf("%d ",a[i]);
	return 0;
}