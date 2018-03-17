#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(ll i=(ll)l;i<=(ll)r;++i)
#define g(i,l,r) for(ll i=(ll)l;i>=(ll)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
ll t,n;
struct node
{
	ll a,b,c;
}e[sz];
ll f[sz];
bool cmp(node a,node b)
{
	return a.b*b.c >a.c*b.b;
}
int main()
{
	LOACL
	cin>>t>>n;
	f(i,1,n)cin>>e[i].a;
	f(i,1,n)cin>>e[i].b;
	f(i,1,n)cin>>e[i].c;
	sort(e+1,e+n+1,cmp);
 
	f(i,1,n)
	g(j,t,e[i].c)
	//	 for(ll j = t; j - e[i].c >= 0; j--)
			 f[j] = max(f[j], f[j-e[i].c] + e[i].a - j * e[i].b);
	ll maxx =0;
	f(i,1,t)
	maxx=max(maxx,f[i]);
	cout<<maxx<<endl;
	 
	return 0;
}

