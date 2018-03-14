#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 998244353;
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
ll T,a,b,n,m;
ll  F[sz],inv[sz],Finv[sz];
ll comb(ll n,ll m) //C(n,m)
{
	if(n<0||m<0)return 0;
	return F[n]*1ll*Finv[n-m]%mod*Finv[m]%mod;
}
void init_Finv() //F 阶乘 Finv 逆元
{
	inv[1]=1;
	f(i,2,sz-1)
	  inv[i]=(mod-mod/i)*1ll*inv[mod%i] %mod;
	F[0]=Finv[0]=1;
	f(i,1,sz-1)
	{
		F[i]=F[i-1]*1ll*i%mod;
		Finv[i]=Finv[i-1]*1ll*inv[i]%mod;
	} 
}
void work()
{
	cin>>T;
	init_Finv();

	while(T--)
	{
		 
		cin>>a>>b>>n>>m;
		if(n<m){
			cout<<0<<endl;
			continue;
		} 
		if(n==m)
		{
			cout<<poww(b,n-1,mod)<<endl;
			continue;
		}
		if(m==1)
		{
			cout<<poww(a,n-1,mod)<<endl;
			continue;
		}
		ll ans = (comb(n-1,m-1)*poww(a,n-m,mod) )%mod* poww(b,m-1,mod)%mod;
		cout<<ans<<endl;
 	}
	
}
void work1()
{
    cin>>T;
    while(T--)
    {
    	cin>>a>>b>>n>>m;
    	ll mx =min(n,m);
    	ll mn =max(n,m);

    	ll c = (a+b)%mod;
    	c=poww(c,mn,mod);
        ll t ; 
		if(n>m)
		 t=poww(a,mx-mn,mod);
		else t= poww(b,mx-mn,mod);
        c =c*t%mod;
    	cout<<c<<endl; 
    }
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
 
    work();
   
    return 0; 
}