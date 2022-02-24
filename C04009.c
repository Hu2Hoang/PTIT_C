#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,n,temp;
int sc=0,sl=0;
int c[105],l[105];
int main(){
	scanf("%d",&n);
	fio(i,0,n) {
		scanf("%d",&temp);
		if(temp%2==0) c[++sc]=temp;
		else l[++sl]=temp;
	}
	for(int i=1;i<=sc;i++) printf("%d ",c[i]);
	printf("\n");
	for(int i=1;i<=sl;i++) printf("%d ",l[i]);
	
	return 0;
}