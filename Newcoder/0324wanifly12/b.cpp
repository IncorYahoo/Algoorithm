#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(ll i=(ll)l;i<=(ll)r;++i)
#define g(i,l,r) for(ll i=(ll)l;i>=(ll)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
ll n,m;
ll a[sz],b[sz];

int main()
{
    LOACL
    FASTIO
    
    cin>>n>>m;
    f(i,1,n) cin>>a[i];
    f(i,1,n) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1); 
    ll ans =0 ;
    ll cur = 0 ;	
    f(i,1,n)
    {
    	cur+=b[n-i+1]-a[i];
    	if(i%3==0) cur+=m;
    	ans=max(ans,cur);
    }
    cout<<ans<<endl;

    return 0;
}