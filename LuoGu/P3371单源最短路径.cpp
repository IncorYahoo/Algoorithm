#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef double dl; 

#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";

const ll   inf = 2147483647;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
int n,m,s,u,v,w,tot;
int head[sz],vis[sz];
ll dis[sz];
struct edge
{
	int v,nxt,w;
}e[sz];
void add(int u,int v,int w)
{
	e[++tot]=(edge){v,head[u],w},head[u]=tot; 
}
void spfa()
{
	queue<int>q ;
	q.push(s);
	vis[s]=1;
	dis[s]=0;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		vis[v]=0;
		for(int i=head[v];i!=-1;i=e[i].nxt)
		{
	 		if(dis[e[i].v]>dis[v]+e[i].w)
	 		{
	 			dis[e[i].v]=dis[v]+e[i].w; 
				if(!vis[e[i].v])
					vis[e[i].v]=1,q.push(e[i].v);
			}
		} 
	} 
}
  
 
int main()
{
    LOACL
    FASTIO
    CLR(head,-1);
    //CLR(dis,inf);
    fill(dis,dis+sz,inf);
    cin>>n>>m>>s;
    REP(i,1,m)
    {
    	cin>>u>>v>>w;
    	add(u,v,w);
    }
    spfa();
    REP(i,1,n)cout<<dis[i]<<" ";

    CLOCK
    return 0;
}