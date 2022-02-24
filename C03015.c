#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
long long maxUsnt(long long n)
{
    long long maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /=2; 
    }
    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}
int main(){
	w(t){
		long long n;scanf("%lld",&n);
		printf("%lld\n",maxUsnt(n));
	}
	return 0;
}
