#include <stdio.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
int i, n, t, dem;
long long res = 0, temp;

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		long long a[100005] = {};
		long long b[100005] = {};
		for (int i = 0; i < n; i++) scanf("%lld",&a[i]);
		for (int i = 0; i < n; i++) {
			dem = 1;
			while (a[i] == a[i + 1]) {
				dem++; i++;
			}
			if (dem >= 2) {
				b[i] = dem;
			}
		}
		for (int i = 0; i < n; i++) {
			if (b[i] >= 2) {
				temp = b[i] - 1;
				res += temp;
			}
		}
		printf("%lld\n", res);
		res = 0;
	}

	//fio(i,1,n) cout<<a[i]<<' '<<b[i]<<"\n";
	return 0;
}