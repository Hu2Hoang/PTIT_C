#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,j;
struct sv
{
	int id;
	float dv,dt,da;
	char ten[20];
};
typedef struct sv sv;
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
sv nhap(int ma){
	sv x;
	x.id=ma;
	getchar();
	gets(x.ten);
	scanf("%f%f%f",&x.dv,&x.dt,&x.da);
	return x;
}
void in(sv x){
	printf("%d %s %.1f %.1f %.1f\n",x.id,x.ten,x.dv,x.dt,x.da);
}
float tong(sv x){
	return x.dv+x.dt+x.da;
}
void sx(sv a[],int n){
	int j;
	fio(i,0,n-1){
		fio(j,i,n){
			if(tong(a[i])>tong(a[j])){
				sv temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	sv a[100];
	int ma,n=0,dem=0,sua[100];
	while(1){
		int lc;scanf("%d",&lc);
		if(lc==1){
			int x;scanf("%d",&x);
			fio(i,0,x){
				a[n]=nhap(n+1);
				n++;
			}
		}
		else if(lc==2){
			int ma;
			scanf("%d",&ma);
			sua[dem]=ma;dem++;
			sv x=nhap(ma);
			a[ma-1]=x;
		}
		else if(lc==3){
			printf("%d\n",n);
			fio(i,0,dem) printf("%d ",sua[i]);
			printf("\n");
			sx(a,n);
			fio(i,0,n) in(a[i]);
			break;
		}
	}
	return 0;
}