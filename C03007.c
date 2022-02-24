#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a, b, i,j;
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
bool palin(int n) {
	int tmp,temp,sum=0;
	temp=n;
	while(n>0){
		tmp=n%10;
		sum=sum*10+tmp;
		n/=10;
	}
	if (temp == sum)
		return true;
	else
		return false;
	return true;
}
int main() {
	w(t){
		int cnt=0;
	scanf("%d%d", &a, &b);
	fio(j, a, b) {
		if (snt(j) && palin(j)) {
			cnt++;
			if(cnt<10) printf("%d ", j);
			else if(cnt==10) {
				printf("%d\n", j);
				cnt=0;
			}
		}
	}
	printf("\n");
	printf("\n");
	}
	return 0;
}