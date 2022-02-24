#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int arr[20],j=0;i=0;
int main(){
	w(t){
	long long n;
	scanf("%lld",&n);
	 while(n!=0){
        arr[j] = n % 10;
        n/=10;
        j++;        
    }
    bool isbool = true;
    for( i = 0; i< j; i++){
        if(arr[i+1] > arr[i] )
            isbool = false;
    }
    if(isbool)
       	printf("YES\n");
    else
        printf("NO\n");
    isbool=true;
    i=0;n=0;j=0;arr[n]=0;

	}
	return 0;
}
