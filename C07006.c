#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int i, n;
struct p{
	double x,y;
};
typedef struct p p;
double kc(p a, p b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int main() {
	w(t) {
		p a,b,c;
		scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
		double ab=kc(a,b),bc=kc(b,c),ac=kc(a,c);
		if(ab+bc<=ac||bc+ac<=ab||ac+ab<=bc||ab<=0||bc<=0||ac<=0){
				printf("INVALID\n");
		}
		else {
			double p=(ab+bc+ac)/2;
			double s=sqrt(p*(p-ab)*(p-bc)*(p-ac));
			printf("%.2lf\n",s);
		}
	}
	return 0;
}
