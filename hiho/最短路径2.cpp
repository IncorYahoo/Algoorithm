#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll; 
const int inf = 1e4+6;
const int sz = 1005;
int g[sz][sz];
int n,m,u,v,w;
 
void floyd()
{
	f(k,1,n)
	f(i,1,n)
	f(j,1,n)
	g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
}
int main()
{
	LOACL
	CLR(g,inf);
	cin>>n>>m;
	f(i,1,n)g[i][i]=0;

	 
	f(i,1,m)
	{
		cin>>u>>v>>w;
		if(w < g[u][v]) 
			g[u][v]=g[v][u]=w; 
	}

	 
 
	floyd() ;
	     
	f(i,1,n)
	{
		f(j,1,n)
		cout<<g[i][j]<<" ";
		cout<<endl;
	}
 
	return 0;
}