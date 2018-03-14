#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],w},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll; 
const int sz =1e6+5;
const int inf =0x3f3f3f;
int n,m,s,t,u,v,w;
 int dis[sz], vis[sz] ;
 struct  edge 
 {
 	int v,nxt,w;
 }e[sz<<1];
 int head[sz],tot;
void add(int u,int v,int w )
{
	e[++tot]=(edge){v,head[u],w},head[u]=tot;
}
 void  spfa()
 {
 	int pos ;
 	queue<int >q;
 	q.push(s);
 	vis[s]=1;
 	dis[s]=0;
 	while(!q.empty())
 	{
 		int pos = q.front();
 		q.pop();
 		vis[pos]=0;
 		for(int i = head[pos];i!=-1;i=e[i].nxt)
 		{
 			int v =e[i].v;
 			if(dis[v]> dis[pos]+e[i].w)
 			{
 				dis[v] = dis[pos]+e[i].w ;
 				if(!vis[v])
	 			{
	 				vis[v]=1;
	 				q.push(v);
	 			}
 			}	
 		
 		}
 	}




 }
int main()
{
	LOACL
	CLR(vis,0);
	CLR(dis,inf);
	CLR(head,-1);
	cin>>n>>m>>s>>t;
 	f(i,1,m)
 	{
 		cin>>u>>v>>w;
 		add(u,v,w);add(v,u,w);
 	}
	spfa();  
	cout<<dis[t]<<endl;
	return 0;
}
