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
void b5(char s[]){
	int leng=strlen(s);
	fio(i,0,leng){
		if(s[i]=='6') s[i]='5';
	}
}
void b6(char s[]){
	int leng=strlen(s);
	fio(i,0,leng){
		if(s[i]=='5') s[i]='6';
	}
}
long long charInt(char s[]){
	long long res=0;
	int leng=strlen(s);
	fio(i,0,leng){
		res=res*10+(s[i]-'0');
	}
	return res;
}
int main(){
	w(t){
	char s1[20], s2[20];
	scanf("%s%s",&s1,&s2);
	b5(s1);b5(s2);
	long long n1=charInt(s1);long long n2=charInt(s2);
	printf("%lld ",n1+n2);
	b6(s1);b6(s2);
	long long m1=charInt(s1);long long m2=charInt(s2);
	printf("%lld",m1+m2);
	printf("\n");
}
	return 0;
}