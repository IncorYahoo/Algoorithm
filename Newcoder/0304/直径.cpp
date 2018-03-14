#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 
int n,k,x,y,l;
struct edge{
	int t,s,nxt;
}e[sz<<1];
int tot,heads[sz];
void add(int u,int v,int s)
{
	e[++tot] =(edge){v,s, heads[u]},heads[u]=tot;
	e[++tot] =(edge){u,s, heads[v]},heads[v]=tot;
}

priority_queue<ll> q;
vector<ll> dis[sz];
ll tmp[sz],res[sz];

void qadd(ll l )
{
	q.push(-l);
	if((int)q.size()>k)q.pop();
}
 void uni(int x,int y,ll l)
 {
 	int i,j,szx =dis[x].size(),szy =dis[y].size();
 	for(i=0;i<szy;i++)
 	{
 		dis[y][i]+=l;
 		for(j=0;j<szx;j++)
 			qadd(dis[y][i]+dis[x][j]);
 	}

    merge(dis[x].begin(),dis[x].end(),dis[y].begin(),dis[y].end(),tmp,greater<ll>());
    dis[x]=vector<ll>(tmp,tmp+min(k,szx+szy));
}
 

void dfs(int f,int x){
    dis[x]=vector<ll>(1);
    int i;
    for (i=heads[x];i!=-1;i=e[i].nxt)if (e[i].t!=f){
        dfs(f,e[i].t);
        uni(f,e[i].t,e[i].s);
    }
}
 
void work()
{
    cin>>n>>k;
    CLR(heads,-1);
    f(i,1,n-1)
    {
    	cin>>x>>y>>l;
    	x++,y++; 
    	add(x,y,l);
    }
    dfs(1,1);
    f(i,1,k){
    	res[k-i+1]=-q.top(),q.pop();
    }
    f(i,1,k)
    	cout<<res[i]<<endl;
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    cout<<"hello"<<endl;

    return 0; 
}