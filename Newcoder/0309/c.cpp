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
int n,m,k,f[17][17][(1<<15)],ban[233];
vector<int> s1,s2;
 

void work()
{
    cin>>n>>m>>k;
    f(i,1,n)
    {
    	int x=0;
    	f(j,0,m-1)
    	{
    		cin>>x;
    		if(!x)ban[i]|=1<<j;
    	}
    }
    f(i,1,k)
    {
    	int x,y;
    	cin>>x>>y;
    	if(x==1)s1.pb(y);
    	else s2.pb(y);
    }
    f[0][m-1][(1<<m)-1] =1; 
    f(i,1,n)
    {
    	f(j,0,m-1)
    	{
    		int * pv =j?f[i][j-1]:f[i-1][m-1];
    		if(ban[i]&(i<<j))
    		{
    			f(k,0,(1<<m)-1)
    			   (f[i][j][k|(1<<j)]+=pv[k])%=mod;
    			continue;
    		}
    		f(k,0,(1<<m)-1)
    		   (f[i][j][k&(~(1<<j))]+=pv[k])%=mod;
    		 
    		f(k,0,s1.size()-1)
            {
            	int t= s1[k];
                if(t+j>m) continue;
                int ps=((1<<t)-1)<<j;
                if(ban[i]&ps) continue;
                for(int k=0;k<(1<<m);++k)
                    (f[i][t+j-1][k|ps]+=pv[k])%=mod;
            }
            f(k,0,s2.size()-1)
            {
            	int t=s2[k];
            	if(t+j>m) continue;
                int ps=((1<<t)-1)<<j;
                if(ban[i]&ps) continue;
                for(int k=0;k<(1<<m);++k) if(k&ps);else
                    (f[i][t+j-1][k|ps]+=pv[k])%=mod;
            }      
    	}
    }
    int ans=0;
     for(int k=0;k<(1<<m);++k)
        (ans+=f[n][m-1][k])%=mod;
    cout<<ans<<endl;
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