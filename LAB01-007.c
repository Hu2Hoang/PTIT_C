#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a[105];
int main(){
	int n,temp=0,sum=0;
	double res=0;	
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&temp);
		sum+=temp;
	}
	res=(float)sum/n;
	printf("%.3lf",res);
	return 0;
}