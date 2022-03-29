#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
bool scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return true;
	else return false;
}
int main()
{
	long long a,b,c,d,e,f,x,y;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+f*e;
	long long cach=sqrt(x);
	if(!scp(x)) printf("NO");
	else
	{	
		if(a>b) {
			int temp=a;
			a=b;
			b=temp;
		}
		if(c>d) {
			int temp=c;
			c=d;
			d=temp;
		}
		if(e>f) {
			int temp=e;
			e=f;
			f=temp;
		}
		if(b==d && d==f && f==cach) printf("YES");
		else
		{	
			if(d==cach) {
				
				int temp=a;
				a=c;
				c=temp;

				int tmp=b;
				b=d;
				d=tmp;
			}
			if(f==cach) {
				int temp=a;
				a=e;
				e=temp;

				int tmp=b;
				b=f;
				f=tmp;
			}
			if(b==cach)
			{
				a=cach-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  printf("YES");
				else printf("NO");
			}		
			else printf("NO");
		}
			
	}	
	return 0;
}
