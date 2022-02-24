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
struct guest
{
	int t;
	int d;
};
typedef struct guest guest;
void sx(guest a[],int n){
	fio(i,0,n){
		fio(j,i+1,n){
			if(a[i].t>a[j].t){
				guest temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
}
int main(){
	scanf("%d",&n);
	guest a[n];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].t,&a[i].d);
	}
	sx(a,n);
	// fio(i,0,n){
	// 	printf("%d %d\n",a[i].t,a[i].d);
	// }
	long long res=0;
	res=a[0].t+a[0].d;
	for(int i=1;i<n;i++){
		if(a[i].t>=res) res=a[i].t+a[i].d;
		else{
			res+=a[i].d;
		}
	}
	printf("%lld",res);
	return 0;
}