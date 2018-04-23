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
int n,m,k,tot,ans[400001],bro[400001],fa[400001],head[400001];
bool bor[400001];
 
struct edge
{
	int v,nxt,u;
}e[400001];
void add(int u,int v)
{
	e[++tot]=(edge){v,head[u],u},head[u]=tot; 
}
int getf(int u)
{
	if(u!=fa[u])
		fa[u]= getf(fa[u]);
	return fa[u];	
}
void uni(int u,int v)
{
	int fu = getf(u);
	int fv = getf(v);
	if(fu!=fv)
		fa[fu]=fv;
}
int main()
{
    LOACL
    FASTIO

  	cin>>n>>m;
    REP(i,1,n)fa[i]=i,head[i]=-1;
    REP(i,1,m)
    {
    	int x,y;
    	 
    	cin>>x>>y;
    	add(x,y);
    	add(y,x);
    }
    cin>>k;
    REP(i,1,k)
    {
    	cin>>bro[i];
    	bor[bro[i]]=1;
    }

    int total = n-k;
    REP(i,1,2*m)
    {
    	if(!bor[e[i].u] && !bor[e[i].v] && getf(e[i].u)!=getf(e[i].v))
    	{
    		total--;
    		uni(e[i].u,e[i].v);
    	}
    }
	ans[k+1]=total;
	DOWN(i,k,1)
	{
		total++;
		bor[bro[i]]=0;
		for(int j = head[bro[i]];j!=-1;j=e[j].nxt)
		{
			if(!bor[e[j].v] && getf(e[j].u)!=getf(e[j].v))
			{
				total -- ;
				uni(bro[i],e[j].v);
			}
		}
		ans[i]=total;
	}
  	REP(i,1,k+1)    cout<<ans[i]<<endl;
    
    return 0;
}
