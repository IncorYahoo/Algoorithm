#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int N = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

ll poww(ll a,ll b,ll c )
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0) ans = ans*base%c; 
        base= base*base%c;
        b/=2;
    }
   return ans;
}
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
 
  
int n,m,h,a[N],head[N],nxt[N<<1],to[N<<1],dfn[N],low[N],DFN=0,fr[N<<1];
int sum=0,num=0,st[N],top=0,scc[N],sz[N],t[N],b[N];bool inst[N];
inline void link(int x,int y){
	nxt[++num]=head[x];
	to[num]=y;
	head[x]=num;
	fr[num]=x;
}
inline void tarjan(int x){
	dfn[x]=low[x]=++DFN;
	st[++top]=x;inst[x]=1;
	for(int i=head[x];i;i=nxt[i]){
		int u=to[i];
		if(!dfn[u])tarjan(u),low[x]=min(low[x],low[u]);
		else if(inst[u])low[x]=min(low[x],dfn[u]);
	}
	if(dfn[x]==low[x]){
		++sum;
		int v;
		do{
			v=st[top--];
			b[v]=sum;sz[sum]++;inst[v]=0;
		}while(top && v!=x);
	}
}
 
   
  





void work()
{
	int x,y;
    cin>>n>>m>>h;
    f(i,1,n)cin>>a[i];
    f(i,1,m)
    {
    	cin>>x>>y;
    	if((a[x]+1)%h==a[y]) link(x,y);
    	if((a[y]+1)%h==a[x]) link(y,x); 
    }
    f(i,1,n)
    if(!dfn[i]) tarjan(i);
    f(i,1,num)
    {
    	int u =fr[i],v=to[i];
    	if(b[u]!=b[v]) t[b[u]]++;
    }
    int ans=inf,p=0; 
   f(i,1,sum)
   if(t[i]==0 && sz[i]<ans) ans =sz[i],p=i; 
   cout<<ans<<endl;
   f(i,1,n)
   if(b[i]==p)cout<<i<<" "; 
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}