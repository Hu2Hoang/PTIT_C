#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	w(t){
		char a[11];
		scanf("%s",&a);
		int sum = 0;
		int t = strlen(a) -1;
		for( int j=0;j<=t;++j) sum += a[j]-48;
			printf("%d\n",sum);
	}
	return 0;
}
