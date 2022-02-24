#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int a;
int main(){
	scanf("%d",&a);
	int nam=a/365;
	int tuan=(a-nam*365)/7;
	int ngay=(a-nam*365)%7;
	printf("%d %d %d",nam,tuan,ngay);
	return 0;
}