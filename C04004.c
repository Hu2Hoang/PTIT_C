#include<stdio.h> 
#define w(t) int t;scanf("%d",&t);while(t--)
long long fibo(int n){ 
	long long f[100];
	 int i; 
	 if(n<2){ 
	 	return 1; 
	 } 
	 else{ 
	 	f[0]=f[1]=1; 
	 	for(i=2;i<=n;i++){ 
	 		f[i]=f[i-2]+f[i-1]; 
	 	} 
	 	return f[n]; 
	 } 
}
int main() { 
	int n; 
	w(t){ 
		scanf("%d", &n); 
		printf("%lld\n",fibo(n-1));
	} 
	return 0;
} 