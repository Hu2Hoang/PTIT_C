

#include<stdio.h>
#include<math.h>

long long ktcp(long long a)
{
	long long b=sqrt(a);
	if(b*b==a) return b;
	b++;
	if(b*b==a) return b;
	return 0;
}


void swap(long long *xp, long long *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main()
{
	long long a,b,c,d,e,f,x,y;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+f*e;
	y=ktcp(x);
	if(y==0) printf("NO");
	else
	{	//C1: 3 canh song song bang nhau
		if(a>b) {int temp=a;a=b;b=temp;}
		if(c>d) {int temp=c;c=d;d=temp;}
		if(e>f) {int temp=e;e=f;f=temp;}
		if(b==d && d==f && f==y) printf("YES");
		else
		{	//Một hình có cạnh lớn là cạnh hình vuông, hai hình còn lại thì có 2 cạnh bằng nhau bằng cạnh hình vuông trừ đi cạnh nhỏ
			if(d==y) {
				swap(&a,&c); swap(&b,&d);
			}
			if(f==y) {swap(&a,&e); swap(&b,&f);}
			if(b==y)
			{
				a=y-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  printf("YES");
				else printf("NO");
			}		
			else printf("NO");
		}
			
	}	
}
