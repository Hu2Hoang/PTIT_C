#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,j;
int a[105];
int main(){
	scanf("%d",&n);
	fio(i,0,n) scanf("%d",&a[i]);
	bool done=false;
	fio(i,0,n-1){
		done=false;
		fio(j,0,n-i-1){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				done=true;	
			}
		}
		if(done==false) {
			break;
		}
	 	printf("Buoc %d: ",i+1);
        for(int z=0;z<n;z++){
            printf("%d ",a[z]);
        }
        printf("\n");
	}
	return 0;
}