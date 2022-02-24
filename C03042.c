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
		if(temp<=tmp) {
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
		int a,b,i,j;
		int cnt=0;
		scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++){
			if(check(i)) {
				cnt++;
			}
		}
		printf("%d\n",cnt);
		i=0,cnt=0;j=0;
	}
	return 0;
}