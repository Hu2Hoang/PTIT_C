#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int main(){
	w(t){
		bool check=true;
		char a[1005];
		scanf("%s",&a);
		int leng=strlen(a)-1;
		fio(i,0,leng){
			if(a[i]=='0') a[i]='0';
			else if(a[i]=='1') a[i]='1';
			else if(a[i]=='8') a[i]='0';
			else if(a[i]=='9') a[i]='0';
			else{
				check=false;
				break;
			}
		}
		long long intn=0;
		for(int i=leng;i>=0;i--) {
			intn+=(int)(a[i]-'0')*pow(10,leng-i);
		}
		if(check==false||intn==0) printf("INVALID\n");
		else{
			printf("%lld\n",intn);
		}
	}
	return 0;
}