#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,a[105],b[15];
int main(){
	int t;scanf("%d",&t);
	for(int z=1;z<=t;z++){
		printf("Test %d:\n",z);
	scanf("%d",&n);
	fio(i,0,n) {
		scanf("%d",&a[i]);	
		b[a[i]]++;
	}
	fio(i,0,n){
		if(b[a[i]]!=0){
			printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}

	}
	return 0;
}