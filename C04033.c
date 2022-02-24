#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
int i,n,j;
int a[105],dd[105];
int main(){
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		//j=i+1;
    	//while (j<n){
		for(int j=i+1;j<n;j++){
    	if (a[i]==a[j])
		{
        	for (int k=i;k<n-1;k++) a[k]=a[k+1];
    		n--;
    	}
        //else j++;
    	}
	}
	//n--;
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}