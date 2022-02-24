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
int main(){
	char aa[27]="abcdefghijklmnopqrstuvwxyz";
	char n[55];
	gets(n);
	int cnt=0,idx=0;
	int leng=strlen(n);
	fio(i,0,leng){
		if(n[i]==aa[idx]){
			idx++;
			cnt++;
		}
	}
	printf("%d",26-cnt);
	//printf("%c",aa[25]);
	return 0;
}