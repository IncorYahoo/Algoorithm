#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl
 
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)

#define INF 999999999
const int sz = 30000*2;
int n,m,x,y,z,tot,q;
int head[sz],deep[sz],fa[sz],f[sz][21],w[sz][21];
bool vis[sz];
struct node
{
	int u,v,w; 
}a[sz];
struct edge
{
	int v,nxt,w;
}e[sz<<1];
bool cmp(node l ,node r)
{
	return l.w>r.w;
}
int getf(int x)
{
	if(x!=fa[x])fa[x]=getf(fa[x]);
	return fa[x];
}
void add(int u ,int v,int w )
{
  	e[++tot] =(edge){v,head[u],w},head[u]=tot;
    e[++tot] =(edge){u,head[v],w},head[v]=tot;
}

void krusual()
{
	sort(a+1,a+m+1,cmp);
	REP(i,1,n) fa[i]=i; 
	REP(i,1,m)
	{
		if(getf(a[i].u)!=getf(a[i].v))
		{
			fa[getf(a[i].u)] = getf(a[i].v);
			add(a[i].u,a[i].v,a[i].w);
		}	
	}
}
 
void dfs(int x)
{
	vis[x] = true;
	for(int i = head[x];i;i=e[i].nxt)
	{
		int v = e[i].v;
		if(vis[v]) continue;
		deep[v] =deep[x]+1;
		f[v][0] = x;
		w[v][0] = e[i].w;
		dfs(v); 
	}
}
int lca (int x,int y)
{  
 
    if(getf(x)!=getf(y)) return -1;
    int ans=INF;
	if(deep[x]<deep[y])swap(x,y);

	DOWN(i,20,0)
		if(deep[f[x][i]]>=deep[y])
		{
			
			ans=min(ans,w[x][i]);
			x = f[x][i];
		}	


	if(x==y) return ans;
 
	DOWN(i,20,0)
	{
		if(f[x][i]!=f[y][i])
		{
			ans=min(ans,min(w[x][i],w[y][i]));
			x=f[x][i],y=f[y][i];
		}
	}	
 	ans = min(ans,min(w[x][0],w[y][0]));
    return ans;

}

int lca1(int x,int y)
{
    if(getf(x)!=getf(y)) return -1;
    int ans=INF;
    if(deep[x]>deep[y]) swap(x,y);
    DOWN(i,20,0)
    {
        if(deep[f[y][i]] >=deep[x])
        {
            ans = min(ans,w[y][i]);
            y=f[y][i];
        }
    }
    if(x==y) return ans; 
    DOWN(i,20,0)
    {
        if(f[x][i]!=f[y][i])
        {
            ans=min(ans,min(w[x][i],w[y][i]));
            x=f[x][i],y=f[y][i];
        }
    }
    ans = min(ans,min(w[x][0],w[y][0]));
    return ans;
}


int main()
{
    LOACL
    FASTIO
    cin>>n>>m;
    REP(i,1,m)
    	cin>>a[i].u>>a[i].v>>a[i].w;
 	krusual();

 	//先 dfs 一下 然后 init lca 
 	REP(i,1,n)
 	{
 		if(!vis[i])
 		{
 			deep[i]=1;
 			dfs(i);
 			f[i][0]=i;
 			w[i][0]=INF;
 		}
 	}

 //   REP(i,1,n) DBG3(i,f[i][0],w[i][0]);

 	REP(j,1,20) REP(i,1,n)
 	{
 		f[i][j] =f[f[i][j-1]][j-1];
 		w[i][j] =min(w[i][j-1],w[f[i][j-1]][j-1]);	
 	}
 	//REP(i,1,n) DBG3( w[i][0],f[i][0], deep[i]);
 	cin>>q;
 	REP(i,1,q)
 	{
 		cin>>x>>y;
 		cout<<lca(x,y)<<endl;
 	} 

    return 0;
}