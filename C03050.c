#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
bool checkLine(int xA,int yA,int xB,int yB,int xC,int yC){
	if((xA-xB)*(yB-yC)==(xB-xC)*(yA-yB)) return true;
	else return false;
}
int i,n;
int main(){
	bool check=true;
	int a[100005]={},b[100005]={};
	scanf("%d",&n);
	fio(i,0,n-1){
		scanf("%d%d",&a[i],&b[i]);
	}
	fio(i,0,n-3){
		if(checkLine(a[i],b[i],a[i+1],b[i+1],a[i+2],b[i+2])==false){
			check=false;
			break;
		} 
	}
	if(check) printf("Yes");
	else printf("No");
	return 0;
}