#include <stdio.h>
#define fio(i,a,b) for(int i=a;i<=b;i++)
int arr[100005],n,i;
long long k;
int main(){
	scanf("%d",&n);
	fio(i,1,n) scanf("%d",&arr[i]);
	scanf("%lld",&k);
	k=k-(k/n)*n;

	//fio(i,k+1,n) printf("%d ",arr[i]);
		for(int i=n-k+1;i<=n;i++) printf("%d ",arr[i]);
	fio(i,1,n-k) printf("%d ",arr[i]);
	return 0;
}