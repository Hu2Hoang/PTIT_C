#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int main(){
	int n;
	w(t){
		scanf("%d",&n);
		int sc=0,sl=0;
		while(n!=0){
			int temp=n%10;
			if(temp%2==0) sc++;
			else sl++;
			n/=10;
		}
		printf("%d %d",sl,sc);
		printf("\n");
	}
	
	return 0;
}