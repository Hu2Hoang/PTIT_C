#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int c[105],l[105];

void quicksort(int a[], int left, int right){
	int l=left,r=right;
	int key=a[(l+r)/2];

	while(l<=r){
		while(a[l]<key) l++;
				// > 
		while(a[r]>key) r--;
				// <
		if(l<=r){
	
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;r--;
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}
int sc=0,sl=0;
int main(){
	int i,n,temp;
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&temp);
		if(temp%2==0) c[++sc]=temp;
		else l[++sl]=temp;
	}
	quicksort(c,1,sc);
	fio(i,1,sc+1) printf("%d ",c[i]);
	quicksort(l,1,sl);
	fio(i,1,sl+1) printf("%d ",l[i]);
	return 0;
}