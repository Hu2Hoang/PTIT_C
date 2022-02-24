#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
bool isPrime(long long n)
{
	if (n < 2)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (long long i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
int main() {
	w(t) {
		long long l, r;
		int cnt = 0;
		scanf("%lld%lld", &l, &r);
		for (long long i = l; i <= sqrt(r); i++) {
			if (isPrime(i)) cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}