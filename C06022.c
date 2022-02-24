#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
void chuanHoa(char n[]){
	int leng=strlen(n);
	fio(i,0,leng){
		n[i]=tolower(n[i]);
	}
}

int main(){
	char s1[1005];
	char s2[50];
	char a[100][50];
	gets(s1);gets(s2);
	chuanHoa(s2);
	int n=0,m=0;
	char *token=strtok(s1," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	fio(i,0,n){
		char tmp[100];
		strcpy(tmp,a[i]);
	//	chuanHoa(tmp);
//		if(strcmp(a[i],s2)==0){
//			continue;
//		}
//		else 
		printf("%s ",a[i]);
	}
	//printf("%s ",s2);
	printf("%d\n",n);
	return 0;
}