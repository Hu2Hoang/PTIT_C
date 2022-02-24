#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
int main(){
	w(t){
		int n=0,sc=0,sl=0;
		char kt=' ';
		while(kt!='\n'){
			int temp;
			scanf("%d",&temp);
			n++;
			if(temp%2==0) sc++;
			else sl++;
			kt=getchar();
		}
		if((n%2==0 && sc>sl )||(n%2!=0&&sl>sc)) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}