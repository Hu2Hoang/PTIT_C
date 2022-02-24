#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<inttypes.h>
#include<ctype.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i,n;
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
int chrtoint(char a) {
	int i;
	for (i = 48; i <= 57; i++)
		if (toascii(i) == a) return i - 48;
	return 0;
}

void BigNum(char n1[],char n2[]) {
	int rs[80];
	int c1, c2;
	int i, j, m, cmax, sum;
	c1 = strlen(n1);
	c2 = strlen(n2);
	strrev(n1);
	strrev(n2);
	cmax = c1;
	if (c1 < c2) {
		cmax = c2;
	}
	m = 0;
	for (i = 0; i < cmax; i++) {
		if (c1 == c2 || (i < c1 && i < c2)) {
			sum = m + chrtoint(n1[i]) + chrtoint(n2[i]);
		} else if (i >= c1) {
			sum = m + chrtoint(n2[i]);
		} else if (i >= c2) {
			sum = m + chrtoint(n1[i]);
		}
		rs[i] = sum % 10;
		m = sum / 10;
	}

	if (m) {
		rs[i] = m;
		i++;
	}
	for (j = 0; j < i; j++) {
		printf("%d", rs[i - j - 1]);
	}
	c1=0;c2=0;cmax=0;j=0;i=0;m=0;sum=0;
}
int main(){
	int t;scanf("%d",&t);
	for(int z=1;z<=t;z++){
		char x1[20],maxc1[20],minc1[20],x2[20],maxc2[20],minc2[20];
		scanf("%s%s",&x1,&x2);
		int l1=strlen(x1),l2=strlen(x2);
		fio(i,0,l1){
			maxc1[i]=x1[i];
			minc1[i]=x1[i];
			if(maxc1[i]=='5') maxc1[i]='6';
			if(minc1[i]=='6') minc1[i]='5';
		}
		fio(i,0,l2){
			maxc2[i]=x2[i];
			minc2[i]=x2[i];
			if(maxc2[i]=='5') maxc2[i]='6';
			if(minc2[i]=='6') minc2[i]='5';
		}
		//printf("%ju %ju\n",chrll(minc1)+chrll(minc2),chrll(maxc1)+chrll(maxc2));
		BigNum(minc1,minc2);
		if(z==1) printf("  ");
		else printf(" ");
		BigNum(maxc1,maxc2);printf("\n");
		//printf("%s\n%s",maxc1,minc1);
		//printf("%lld",chrll("121"));
	}	
	//printf("%lld",chrll("655555555555555555"));
	return 0;
}