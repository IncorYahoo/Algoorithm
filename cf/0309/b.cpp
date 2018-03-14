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
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int n,m;
ll a[sz],b[sz],x;
void work()
{
    cin>>n>>m;
    f(i,1,n)
    {
    	cin>>x;
    	a[i]=a[i-1]+x;
    }
    f(i,1,m)
    {
    	cin>>x;
    	b[i]=b[i-1]+x;
    }
    int e1=1;
    int e2=1;
    int b1=0;
    int b2=0;
    x=0;
    while(1)
    {
    	if(e1==n+1) break;
    	ll t = a[e1]-a[b1]; 
    	if(t==b[e2]-b[b2])
    	{
    		b1=e1;e1=e1+1;
    		b2=e2;e2=e2+1;
    		x++; 
    	}
    	else if(t>b[e2]-b[b2])
    	{
    		e2++;
    	}
    	else if(t<b[e2]-b[b2])
    	{
    		e1++;
    	}
    }
    cout<<x<<endl;

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