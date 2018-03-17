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

int  n,m,u,v;
vector<int> G[sz];
int b[sz];
bool vis[sz];
int ans;
bool dfs(int s )
{
	f(i,0,G[s].size()-1)
	{
		int v = G[s][i];
		if(!vis[v])
		{
			vis[v]=true;
			if(b[v]==0 || dfs(b[v]))
			{
				b[v]=s;
				return true;
			}
		} 
	}
	return false;
}
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,m)
	{
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	CLR(b,0);
	f(i,1,n)
	{
		CLR(vis,false);
		if(dfs(i))ans++;
	}
	cout<<ans/2<<endl;
	cout<<n-ans/2<<endl; 
	return 0;
}
