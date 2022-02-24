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
struct mh
{
	int id;
	char ten[1000];
	char group[1000];
	float buy,sell,profit;
};
typedef struct mh mh;
void sx(mh a[],int n){
	fio(i,0,n-1){
		fio(j,i+1,n){
			if(a[i].profit<a[j].profit){
				mh temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	mh a[n];
	for(int i=0;i<n;i++){
		getchar();
		a[i].id=i+1;
		gets(a[i].ten);
		gets(a[i].group);
		scanf("%f%f",&a[i].buy,&a[i].sell);
		a[i].profit=a[i].sell-a[i].buy;
	}
	sx(a,n);
	fio(i,0,n){
		printf("%d %s %s %.2f\n",a[i].id,a[i].ten,a[i].group,a[i].profit);
	}
	return 0;
}