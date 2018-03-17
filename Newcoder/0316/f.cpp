#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
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
ll n,m;
ll a[sz],b[sz];
int c[sz];
ll d[10];
void calc(int x)
{	
	int t=0;
	while(x)
	{
		x=x&(x-1);
		t++;
	}
	d[t]++;
}
void work()
{
    cin>>n>>m;
    f(i,1,m)	cin>>a[i]>>b[i];
    f(i,1,m)
    {
    	f(j,1,m) if(i!=j)
    	{
    		if(a[i]-a[j]>0 && b[i]==b[j])
    			c[i]|=1<<1;
    		else if (a[i]<a[j] && b[i]==b[j])
    			c[i]|=1<<2;
    		else if (a[i]==a[j] && b[i]>b[j])
    			c[i]|=1<<3;
    		else if (a[i]==a[j] && b[i]<b[j])
    			c[i]|=1<<4;
    		else if (a[i]-a[j]>0 && a[i]-a[j] == b[i]-b[j])
    			c[i]|=1<<5;
    		else if (a[i]-a[j]>0 && a[i]-a[j] == b[j]-b[i])
    			c[i]|=1<<6;
    		else if (a[i]-a[j]<0 && a[i]-a[j] == b[i]-b[j])
    			c[i]|=1<<7;
    		else if (a[i]-a[j]<0 && a[i]-a[j] == b[j]-b[i])
    			c[i]|=1<<8; 
       	}
       	calc(c[i]);
    }
    cout<<0;
    f(i,1,8)cout<<" "<<d[i];
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