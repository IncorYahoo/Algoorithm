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
int l,r,n;

void work()
{
    cin>>l>>r>>n;
    if(l==r)
    {
    	cout<<2*(r+n/2)<<endl;
    }
    else if(l< r && n>=r-l)
    {
    	n=n-r+l;
    	cout<<2*(r+n/2)<<endl;
    }
    else if( l< r && n<r-l)
    {
       cout<<2*(l+n)<<endl;
    }
    else if(r< l && n>=l-r)
    {
		n=n-l+r;
    	cout<<2*(l+n/2)<<endl;
    }
    else if(r< l && n<l-r)
    {
         cout<<2*(r+n)<<endl;
    }
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