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
struct word
{	
	char val[1005];
	int leng;
	int fre;
};
typedef struct word word;
bool isPalindrome(char str[])
{
    long long l = 0;
    long long h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
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
int main(){
	char tmp[1000];
	word a[1001];
	int n=0,mleng=-1e9;
	while((scanf("%s",tmp))!=-1){
			int idx=find(a,n,tmp);
			if(idx==-1){
				strcpy(a[n].val,tmp);
				a[n].fre=1;
				a[n].leng=strlen(tmp);
				if(mleng<a[n].leng) mleng=a[n].leng;
				n++;
			}
			else{
				a[idx].fre++;
			}
	}
	fio(i,0,n){
		if(a[i].leng==mleng){
			printf("%s %d %d\n",a[i].val,a[i].leng,a[i].fre);
		}
	}
	return 0;
}