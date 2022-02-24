// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>
// #include<string.h>
// #include<stdlib.h>
// #include<ctype.h>
// #define fio(i,a1,b1) for(i=a1;i<b1;i++)
// #define w(t) int t;scanf("%d",&t);while(t--)
// #define max(a,b) (((a)>(b))?(a):(b))
// #define min(a,b) (((a)<(b))?(a):(b))
// int i, n,j;
// bool check(char n[]){
// 	int leng=strlen(n);
// 	long long intn=atoi(n);
// 	int temp,tmp;
// 	tmp=intn%10;
// 	intn/=10;
// 	while(intn!=0){
// 		temp=intn%10;
// 		if(temp>tmp){
// 			return false;
// 			break;
// 		}
// 		tmp=temp;
// 		intn/=10;
// 	}
// 	return true;
// }
// int main() {
// 	char c[10000];
// 	gets(c);
// 	char a[2000][50];
// 	int n = 0;
// 	char *token = strtok(c, " ");
// 	while (token != NULL) {
// 		strcpy(a[n], token);
// 		++n;
// 		token = strtok(NULL, " ");
// 	}
// //	int idx=0;
// //	char res[1000];
// //	fio(i,0,n){
// //		if(check(a[i])) printf("%s ",a[i]);
// //	}
// 	//printf("%d\n",idx);
// //	for(int i=0;i<=idx;i++) printf("%s ",res[i]);
// 	int b[10000]={0},res[10000]={0};
// 	fio(i, 0, n) {
// 		if (check(a[i])&&b[i] == 0) {
// 			int cnt=1;
// 			fio(j, i + 1, n) {
// 				if (strcmp(a[i], a[j]) == 0) {
// 					cnt++;
// 					b[j] = 1;
// 				}
// 			}
// 			res[i]=cnt;
// 			//printf("%s %d\n", a[i], res[i]);
// 		}
// //		else {
// //			strcpy(a[i],"\0");
// //		}
// 	}
// 	fio(i,0,n){
// 		if(res[i]!=0){
// 			fio(j,i+1,n){
// 				if(res[i]<res[j]){
// 					int tmp=res[i];
// 					res[i]=res[j];
// 					res[j]=tmp;
					
// 					char temp[1000];
// 					strcpy(temp,a[i]);
// 					strcpy(a[i],a[j]);
// 					strcpy(a[j],temp);
// 				}
// 			}
// 			//printf("%d ",res[i]);
// 		}
// 	}
// 	fio(i,0,n){
// 		if(res[i]!=0){
// 			 printf("%s %d\n",a[i], res[i]);
// 		}
// 	}
// 	return 0;
// }
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n,j;
struct word
{	
	char val[1005];
	int fre;
};
typedef struct word word;
bool check(char n[]){
	int leng=strlen(n);
	long long intn=atoi(n);
	int temp,tmp;
	tmp=intn%10;
	intn/=10;
	while(intn!=0){
		temp=intn%10;
		if(temp>tmp){
			return false;
			break;
		}
		tmp=temp;
		intn/=10;
	}
	return true;
}
int find(word a[],int n,char tmp[]){
	fio(i,0,n){
		if(strcmp(a[i].val,tmp)==0){
			return i;
		}
	}
	return -1;
}
void sx(word a[],int n){
	fio(i,0,n-1){
		fio(j,i+1,n){
			if(a[i].fre<a[j].fre){
				word temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	char tmp[1000];
	word a[1001];
	int n=0,mleng=-1e9;
	while((scanf("%s",tmp))!=-1){
		if(check(tmp)){
			int idx=find(a,n,tmp);
			if(idx==-1){
				strcpy(a[n].val,tmp);
				a[n].fre=1;
				n++;
			}
			else{
				a[idx].fre++;
			}
		}
	}
	sx(a,n);
	fio(i,0,n){
			printf("%s %d\n",a[i].val,a[i].fre);
	}
	// if(check("123")) printf("YES");
	// else printf("NO");
	return 0;
}