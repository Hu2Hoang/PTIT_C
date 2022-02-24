#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
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
long long check(char n[]){
		int sum = 0;
		int t = strlen(n) -1;
		for(int j=0;j<=t;++j) sum += n[j]-48;
		return sum;
}
int main(){
	w(t){
		char n[505];scanf("%s",&n);
		int leng=strlen(n)-1;
		if(n[0]=='8'&&n[leng]=='8'&&isPalindrome(n)&&(check(n)%10==0)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}