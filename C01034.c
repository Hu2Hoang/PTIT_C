#include<stdio.h>
#include<math.h>
int main() {
    int L, R;
    int res = 0;
    int A[100000];
    scanf("%d%d",&L,&R);
    int temp = sqrt(L);
   	while(temp * temp != L) {
			++L;
			temp = sqrt(L);
	}
	A[++res] = L;
   	++temp;
   	while(temp * temp < R) {
   		A[++res] = temp * temp;
   		++temp;
	}
	printf("%d\n",res);
	for(int i=1; i<=res; ++i) printf("%d\n",A[i]);
}