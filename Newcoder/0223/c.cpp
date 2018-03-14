#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =750010; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
int n,m,tot,x,h[maxn],f[maxn],v[maxn],s1[maxn],s2[maxn],ans;
struct edge{int t,n;}e[maxn<<1];
void dfs(int x,int fa)
{
	f[x]=fa;
	for(int i=h[x],y;y=e[i].t,i;i=e[i].n)
		if(y!=fa)dfs(y,x);
}
 void work()
 {
 	cin>>n>>m;
 	f(i,1,n-1)
 	{
 		int u,v;
 		cin>>u>>v;
 		e[++tot]=(edge){v,h[u]},h[u]=tot; 
 		e[++tot]=(edge){u,h[v]},h[v]=tot; 
 	} 
 	dfs(1,0);
 	f(i,1,n)
 		cout<<i<<"====="<<f[i]<<endl;
 	f(i,1,m)
 	{
 		cin>>x;v[x]++;
 		if(f[x])      s1[f[x]]++;
 		if(f[f[x]])   s2[f[f[x]]]++;
 		ans = v[f[f[x]]]+v[f[x]]+s1[f[x]]+s1[x]+s2[x];
 		if(x==1)ans+=v[x];
 		cout<<ans<<endl;
 	}
 }
int main()
{
     
    freopen("in","r",stdin);
   // freopen("out","w",stdout);
	work();    
    return 0; 
}

