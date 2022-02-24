#include<stdio.h>
#include<math.h>
#include<vector>
#include<iostream>
using namespace std;
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define exps(vs) for(auto x:vs) cout<<x<<' ';
#define imps(vs) vector<string> vs; fio(i,0,n){ string x;cin>>x; vs.push_back(x); }
//#define exp(vi) for(int x:vi) cout<<x<<' ';
////#define imp(vi) vector<int> vi; fio(i,0,n){int x;cin>>x;vi.push_back(x);}
int a;
int main(){
	scanf("%d",&a);	
	vector<int> vi;cout<<"hello";
	fio(i,1,10){
		//printf("%d ",a*i);
		vi[i]=a*i;

	}
	//exp(vi);
	//for(int x:vi) cout<<x<<' ';
	//cout<<vi.size();

	return 0;
}
