#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 

const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
ll poww(ll a,ll b)
{
    ll ans=1,c=a;
    while(b)
    {
        if(b&1)
            ans*=c;
        c*=c;
            b>>=1;
    }
    return ans;
}
ll l,r,ans;
bool vis[40][50];
void dfs(ll x,ll y)
{
    if(x>30||y>30||vis[x][y]) return;
    ll p = poww(3,x)*(1<<y);
    if(p>r)return;
    if(p>=l&&p<=r) ans++;
    vis[x][y]=1;
    dfs(x+1,y);
    dfs(x,y+1);
}

int main()
{
 
    cin>>l>>r;
    dfs(0,0);
    cout<<ans<<endl;
    return 0;
 }
