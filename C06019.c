#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);getchar();while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i;
void chuanHoa(char c[]){
	for(int i=0;i<strlen(c);i++) c[i]=tolower(c[i]);
}
int main(){
	
		char c[1000],a[20][50];
		int n=0;
		gets(c);
		char *token=strtok(c," ");
		while(token != NULL){
			strcpy(a[n],token); ++n;
			token = strtok(NULL," ");
		}
		
		for(int i=0;i<n-1;i++){
			chuanHoa(a[i]);
			printf("%c",a[i][0]);
		}
		chuanHoa(a[n-1]);
		printf("%s@ptit.edu.vn",a[n-1]);
		printf("\n");	
	return 0;
}