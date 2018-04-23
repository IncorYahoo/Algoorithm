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

struct node
{
	int u,v,w;
}e[sz];
bool cmp(node l,node r)
{
	return l.w<r.w;
}
int fa[sz],n,m;
int getf(int u )
{
	if(fa[u]!= u ) fa[u]=getf(fa[u]);
	return fa[u];

}
bool uni(int u,int v)
{
	int fu = getf(u);
	int fv = getf(v);
	if(fu!=fv)
	{
		fa[fu]=fv;
		return true;
	}
	return false;
}


int main()
{
    LOACL
    FASTIO
    cin>>n>>m;
    REP(i,1,m)cin>>e[i].u>>e[i].v>>e[i].w;
    REP(i,1,n) fa[i]=i;
    sort(e+1,e+m+1,cmp);
  
 	
 	REP(i,1,m)
 	{
 		if(fa[e[i].u] !=fa[e[i].v])
 		{
 			if(uni(e[i].u,e[i].v)) n--;
 		}
 	 
 		if(n==1)
 		{
 			cout<<e[i].w<<endl;
 			return 0; 
 		}
  
 	}
    cout<<-1<<endl;

 
    CLOCK
    return 0;
}
