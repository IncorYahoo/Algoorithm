#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 1e6 + 5;
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
int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int n;
ll b,p,k;
ll poww(ll a,ll b,ll c ){
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        	ans = ans*base%c; 
        base= base*base%c;
        b/=2;
    }
   return ans;
}
//b^p%k
ll quick_pow(ll b ,ll p,ll k)
{
	  ll ans =1,base = b;
	  while(p!=0)
	  {
	  	if(p&1!=0) ans = ans *base%k;
	  	base =base*base%k;
	    p/=2;
	  }
	  return ans; 
}
void work()
{
    cin>>b>>p>>k; 
   cout<<b<<"^"<<p<<" mod "<<k<<"="<<quick_pow(b,p,k)<<endl;
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