#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
bool check(int n){
	int temp,tmp;
	tmp=n%10;
	n/=10;
	while(n!=0){
		temp=n%10;
		if(temp>tmp) {
			return false;
			break;
		}
		tmp=temp;
		n/=10;
	}
	return true;
}
int main(){
	w(t){
		int n,i,j;
		scanf("%d",&n);
		int a=pow(10,n-1);int b=pow(10,n);
		for(i=a;i<b;i++){
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}