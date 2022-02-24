#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,temp;
int a[105],b[105];
int main(){
	int n;scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int cnt=0;
	fio(i,0,100){
		if(b[i]>1) cnt++;
	}
	printf("%d\n",cnt);
	fio(i,0,n){
		if(b[a[i]]>1){ 
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	return 0;
}