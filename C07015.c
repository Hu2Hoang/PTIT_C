#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
struct sv
{
	int id;
	char ten[100];
	char ns[100];
	float d1,d2,d3;
};
typedef struct sv sv;
int main(){
	scanf("%d",&n);
	float dmax=-1e9;
	sv a[n];
	fio(i,0,n){
		getchar();
		a[i].id=i+1;
		gets(a[i].ten);
		scanf("%s",&a[i].ns);
		scanf("%f%f%f",&a[i].d1,&a[i].d2,&a[i].d3);
		if(a[i].d1+a[i].d2+a[i].d3>dmax){
			dmax=a[i].d1+a[i].d2+a[i].d3;
		}
	}
	fio(i,0,n){
		if(dmax==a[i].d1+a[i].d2+a[i].d3){
			printf("%d %s %s %.1f\n",a[i].id,a[i].ten,a[i].ns,a[i].d1+a[i].d2+a[i].d3);
		}
	}
	return 0;
}