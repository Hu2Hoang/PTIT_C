#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	char n[1005];
	int st=0,sc=0,kt=0;
	gets(n);
	int leng = strlen(n);
	fio(i,0,leng){
		if((n[i]>='a'&&n[i]<='z')||(n[i]>='A'&&n[i]<='Z')) st++;
		else if(n[i]>='0'&&n[i]<='9') sc++;
		else kt++;
	}
	printf("%d %d %d",st,sc,kt);
	return 0;
}