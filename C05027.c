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
struct point
{
	int x,y;
};
typedef struct point point;
int cnt=1;
int main(){
	scanf("%d",&n);
	point a[n+1];
	int maxx=1e9,maxy=1e9;
	for(int cnt=0;cnt<n;cnt++){
		scanf("%d%d",&a[cnt].y,&a[cnt].x);
		maxx=min(maxx,a[cnt].x);
		maxy=min(maxy,a[cnt].y);
	}

	printf("%d",maxy*maxx);
	return 0;
}