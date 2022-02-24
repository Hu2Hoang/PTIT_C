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
int main(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	int maxX,minX,maxY,minY;
		maxX=x2>=x4?x2:x4;minX=x1>=x3?x3:x1;
		maxY=y2>=y4?y2:y4;minY=y1>=y3?y3:y1;
	int ngang=maxX-minX;
	int doc=maxY-minY;
	int res=ngang>=doc?ngang:doc;
	printf("%lld",res*res);
	return 0;
}