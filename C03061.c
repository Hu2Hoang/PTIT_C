#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#define w(t) int t;scanf("%d",&t);while(t--)
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
bool gdc(int temp1, int temp2){
	if(temp1*2==temp2||temp2*2==temp1)
		return true;
	else return false;
}
bool isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
int n1,n2,intn;
char tmp1[3],tmp2[3],rev[1005];
int main(){
	w(t){
		char n[1005];
		scanf("%s",n);
		int leng=strlen(n)-1;
		tmp1[0]=n[0]; tmp2[0]=n[leng];
		n1=atoi(tmp1); n2=atoi(tmp2);
		n[0]='0';n[leng]='0';
		if(gdc(n1,n2)&&(isPalindrome(n))) printf("YES");
		else printf("NO");
		printf("\n");
	}

	return 0;
}