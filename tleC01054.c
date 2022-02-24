     
#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--);
long long ptsnt(int n) {
    int i = 2,sum=0;
    while (n > 1) {
        if (n % i == 0) {
           sum+=i;
            n = n / i;

        }
        else {
            i++;
        }
    }
    return sum;
}

int main() {
	 int t;scanf("%d",&t);
	long long res=0;
	for(int z=1;z<=t;z++)
	{
		int n;scanf("%d",&n);
		res+=ptsnt(n);
	}
	printf("%lld",res);
	return 0;
}