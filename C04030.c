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
void quicksort(int a[], int left, int right) {
	int l = left, r = right;
	int key = a[(l + r) / 2];
	while (l <= r) {
		while (a[l] < key) l++;
		// >
		while (a[r] > key) r--;
		// <
		if (l <= r) {
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			l++; r--;
		}
	}
	if (left < r) quicksort(a, left, r);
	if (l < right) quicksort(a, l, right);
}
int main() {
	int t; scanf("%d", &t);
	for (int z = 1; z <= t; z++) {
		printf("Test %d:\n", z);
		int a[105] = {}, b[105] = {}, res[205] = {}, aa[105] = {}, bb[105] = {};
		scanf("%d", &n);
		fio(i, 0, n) scanf("%d", &a[i]);

//	fio(i,0,n) printf("%d ",a[i]);
		for (int j = 0; j < n; j++) scanf("%d", &b[j]);
		//	quicksort(b, 0, n - 1);
		//fio(i,0,n) printf("%d ",b[i]);
		quicksort(a, 0, n -1);
		int c = -1;
		//	fio(i,0,n) printf("%d ",a[i]);
		for (int j = 0; j <= n * 2 ; j += 2) {
			aa[j] = a[++c];
		}
		//for (int j = 0; j < n * 2; j++) printf("%d ", aa[j]);
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (b[i] < b[j]) {
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		//for(int j=0;j<n;j++) printf("%d ",b[j]);
		int l = -1;
		for (int j = 1; j <= n * 2 - 1; j += 2) {
			bb[j] = b[++l];

		}
	//	printf("\n");
	//	for(int j=0;j<n*2;j++) printf("%d ",bb[j]);
		res[0] = a[0]; res[1] = b[0];
		for (int i = 2; i < n * 2; i++) {
			int vt = i;
			if (i % 2 == 0) res[i] = aa[i];
			else res[i] = bb[i];
		}
		fio(i, 0, n * 2) printf("%d ", res[i]);
		printf("\n");
	}

	return 0;
}