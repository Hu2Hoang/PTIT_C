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
struct pokemon{
	char ten[100];
	int da;
	int tda;
	int count;
};
typedef struct pokemon pokemon;
int main(){
	scanf("%d",&n);
	int sum=0,res=0;
	pokemon a[n];
	fio(i,0,n){
		scanf("%s",&a[i].ten);
		scanf("%d%d",&a[i].da,&a[i].tda);
		a[i].count=0;
		while(a[i].da<=a[i].tda){
			a[i].tda-=a[i].da;
			a[i].tda+=2;
			a[i].count++;
		}
		sum+=a[i].count;
		if(a[i].count>res) res=a[i].count;

	}
	printf("%d\n",sum);
	fio(i,0,n){
		if(a[i].count==res){
			printf("%s",a[i].ten);
			break;
		}
	}
	return 0;
}