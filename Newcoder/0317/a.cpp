#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
typedef double dl ;
const dl E  =2.71828182845904523536;
dl poww(dl x,int b)
{
	dl a = 1;
	while(b)
	{
		if(b&1)a*=x;
		x*=x;
		b/=2;
	}
	return a;
}
int main1()
{
	LOACL
 	dl  t = 259572;
 //	cout<<logf(t);
 	cout<<t/147<<endl;
 	return 0;
}
int main()
{
	LOACL
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cout<<fixed<<setprecision(c)<<b*pow(E,a)<<endl; 

	} 
	return 0;
}