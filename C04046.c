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
void quicksort(int a[], int left, int right){
	int l=left,r=right;
	int key=a[(l+r)/2];

	while(l<=r){
		while(a[l]<key) l++;
		while(a[r]>key) r--;
		if(l<=r){
			int temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			l++;r--;
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}
int main(){
	w(t){
	scanf("%d",&n);
	int a[100005]={},res[100005]={};
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	int idx=0,miny=1e9;
	for(int i=n-1;i>0;i--){
		res[idx]=a[i]-a[i-1];
		if(miny>res[idx]) miny=res[idx];
		idx++;
	}
	int cnt=0;
	printf("%d ",miny);
	fio(i,0,idx) if(res[i]==miny) cnt++;
	printf("%d\n",cnt);
}
	return 0;
}