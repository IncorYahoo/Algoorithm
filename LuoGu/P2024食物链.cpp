#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int n,m,z,x,y,ans;
int fa[sz];
int getf(int u)
{
	if(fa[u]!=u)
		fa[u]=getf(fa[u]);
	return fa[u];
} 

void uni(int u,int v)
{
	int fu = getf(u);
	int fv = getf(v);
	if(fu!=fv)
	{
		fa[fu]=fv;
	}
}
int main()
{
    LOACL
    FASTIO
    cin>>n>>m;
    REP(i,0,3*n)fa[i]=i;
    
    REP(i,1,m)
    {
    	cin>>z>>x>>y;
    	if(x>n||y>n){ ans++;continue;}
    	if(z==1)
    	{
    		if(getf(x+n)==getf(y)||getf(x+2*n)==getf(y))
    		{
    			ans++;continue;
    		}
    		uni(x,y),uni(x+n,y+n),uni(x+2*n,y+2*n); 
    	}
    	else if(z==2)
    	{
    		 
    		if(x==y) {ans++; continue;}  
           
    		if(getf(x)==getf(y)||getf(x+2*n)==getf(y)||getf(x)==getf(y))
    		{
    			ans++; continue;	
    		}
    		uni(x,y+2*n); uni(x+n,y); uni(x+2*n,y+n);
    	}
    	else 
    	{
    		ans++;continue;
    	}
    }
	#if 0 
    #endif
    cout<<ans<<endl;
    CLOCK
    return 0;
}