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
//Code design by Hu2Hoang - https://linktr.ee/hoangdinh314
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