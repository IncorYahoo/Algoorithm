#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll;
const int inf = 0x3f3f3f; 
int n,m,s,t,u,v,w;
int g[10005][10005];
int dis[10005];
bool vis[10005] ;
void dij(int s )
{
	f(i,1,n)dis[i]=g[s][i];
	vis[s] =1;
	dis[s] =0;

	f(i,1,n-1)
	{
		int mm = inf,pos;
		f(j,1,n)
		{
			if(!vis[j] && dis[j]<mm)
			{
				mm =dis[j];
				pos =j;
			}
		}
		if(mm==inf ) break;
		vis[pos] =1;
		f(j,1,n)
		{
			if(!vis[j] && dis[pos]+g[pos][j]<dis[j])
				dis[j]=dis[pos]+g[pos][j];
		}
	}
}


void dijkstra(int s){
    for(int i = 1; i <= n; i++)
        dis[i] = g[s][i];
    vis[s] = 1;
    dis[s] = 0;

    for(int i = 1; i < n; i++){
        int min = inf, pos;
        for(int j = 1; j <= n; j++){
            if(!vis[j] && dis[j] < min){
                min = dis[j];
                pos = j;
            }
        }

        if(min == inf)
            break;

        vis[pos] = 1;
        for(int j = 1; j <= n; j++){
            if(!vis[j] && dis[pos] + g[pos][j] < dis[j]){
                dis[j] = dis[pos] + g[pos][j];
            }
        }
    }
}

int main()
{
	LOACL

	CLR(g,inf);
	CLR(vis,false);

	cin>>n>>m>>s>>t; 
	f(i,1,n)g[i][i]=0;
 
       
	f(i,1,m)
	{
		cin>>u>>v>>w;
		g[u][v]=min(g[u][v],w);
		g[v][u]=min(g[v][u],w);
	}
 
	dijkstra(s);
	cout<<dis[t]<<endl;

	 
		 
	return 0;
}
