#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)

int cntChar(char str[],int leng){
	int cnt=0;
	if(str[0]!=' ') cnt=1;
	fio(i,0,leng-1){
		if(str[i]==' '&&str[i+1]!=' ') cnt++;
	}
	return cnt;
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	for(int i=0;i<t;i++){
		char n[105];
		gets(n);
		int leng=strlen(n);
		printf("%d\n",cntChar(n,leng));
		leng=0;
	}
	return 0;
}

