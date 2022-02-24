#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
long long n;
void quicksort(long long a[], long long left, long long right) {
	long long l = left, r = right;
	long long key = a[(l + r) / 2];

	while (l <= r) {
		while (a[l] < key) l++;
		while (a[r] > key) r--;
		if (l <= r) {
			long long temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			l++; r--;
		}
	}
	if (left < r) quicksort(a, left, r);
	if (l < right) quicksort(a, l, right);
}
bool check(long long a[], int n) {
	for (long long i = n - 1; i >= 2; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
			if (a[l] + a[r] == a[i]) return true;
			else if (a[l] + a[r] > a[i]) r--;
			else l++;
		}
	}
	return false;
}
int main() {
	w(t) {
		scanf("%d", &n);
		long long a[5005];
		long long i;
		for(i=0;i<n;i++) {
			long long x;
			scanf("%lld", &x);
			a[i] = (long long)x * x;
		}
		quicksort(a, 0, n - 1);
		if (check(a, n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}