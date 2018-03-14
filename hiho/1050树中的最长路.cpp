#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
struct edge{
	int v,nxt,w;

}e[1<<18];
int tot,n,max_num,u,v,mst,med;
int dis[1<<18];
int head[1<<18];
bool vis[1<<18];
int maxd;
void add(int u,int v,int w)
{
	e[++tot]=(edge){v,head[u],w},head[u]=tot;
	e[++tot]=(edge){u,head[v],w},head[v]=tot;
}
void bfs(int u )
{
	queue<int>q;
	int now,nxt ;
	CLR(vis,false);
	CLR(dis,0);
	vis[u] = true;
	q.push(u);
	maxd=0;
	dis[u]=0;
	while(!q.empty())
	{
		now = q.front();
		q.pop();
		for(int i =head[now];i!=-1;i=e[i].nxt )
		{
			int v= e[i].v;
			if(!vis[v])
			{
				vis[v]=true;
				dis[v]=e[i].w+dis[now];
				if(maxd<dis[v])
				{
					maxd =dis[v];
					max_num = v;
				}
				q.push(v);	
				
			}	

		}
	}
}
int main()
{
	LOACL
	cin>>n;
	memset(head,-1,sizeof(head));
	for(int i=0;i<n;i++)
	{
		cin>>u>>v;
		add(u,v,1);
	} 
	bfs(1);
	mst= max_num;
	bfs(mst);
	cout<<maxd<<endl;
	return 0;
}


