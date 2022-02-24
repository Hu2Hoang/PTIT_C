#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
bool snt(int q) {
	int temp = 0;
	if (q <= 1) return false;
	fio(i, 2, sqrt(q)) {
		if (q % i == 0) {
			temp++;
		}
		if (temp > 0) {
			return false;
			break;
		}
	}
	return true;
}
bool scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return true;
	else return false;
}
bool fibo(int f){
	if(scp(5*f*f+4)||scp(5*f*f-4)) return true;
	else return false;
}
int tsum(int m){
	int sum=0;
	while(m!=0){
		sum+=m%10;
		m/=10;
	}
	return sum;
}
int a,b;
int main(){
	scanf("%d%d",&a,&b);
	if(a>b){
		int tmp=a;a=b;b=tmp;
	}
	fio(i,a,b){
		if(snt(i)&&(fibo(tsum(i)))) printf("%d ",i);
	}
	return 0;
}