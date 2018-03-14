#include<iostream>
#include<string.h>
using namespace std;
const int maxn = 1e5+5;
#define f(i,l,r) for(int i=l;i<=r;i++)
#define g(i,l,r) for(int i=l;i>=r;i--)


int n,m ,x,y;
int ha[maxn],ok[maxn];
struct edge{
	int v,nxt;
};
edge e[maxn];
int dfn[maxn],low[maxn],cnt,tot,indexx,stack[maxn];
int heads[maxn],vis[maxn];
int scc[maxn],scc_cnt,ind[maxn],ans;
void init()
{
	ans = scc_cnt = cnt=tot=indexx=0;
	memset(ha,0,sizeof(ha));
	memset(ok,0,sizeof(ok));
	memset(e,0,sizeof(e));
	memset(dfn,0,sizeof(dfn));
	memset(low,0,sizeof(low));
	memset(stack,0,sizeof(stack)); 
	memset(heads,0,sizeof(heads)); 
	memset(vis,0,sizeof(vis)); 
	memset(scc,0,sizeof(scc)); 
	memset(ind,0,sizeof(ind));
}
void add(int x,int y)
{
	e[++cnt].nxt = heads[x];
	e[cnt].v = y;
	heads[x]=cnt; 
}
void tarjan(int x)
{
	dfn[x]=low[x]=++tot;
	stack[++indexx]=x;vis[x]=1;
	for(int i = heads[x];i!=0;i=e[i].nxt) 
	{
		int t = e[i].v;
		if(!dfn[t])
		{
			tarjan(t);
			low[x]=min(low[x],low[t]);
		}
		else if(vis[t])
		{
			low[x]=min(low[x],dfn[t]);
		}
	}
	if(dfn[x]==low[x])
	{
		scc_cnt++;
		while(1)
		{
			int t = stack[indexx--];
			scc[t]=scc_cnt;
			vis[t]=0;
			if(x==t)break;
		}
	}
}
void slove()
{
	f(i,1,n)if(!dfn[i])tarjan(i);
	f(i,1,n)
		for(int j =heads[i];j;j=e[j].nxt )
		 if(scc[i]!=scc[e[j].v])
		 	ind[scc[e[j].v]]++;
	 
	
	f(i,1,scc_cnt)
	 	if(ind[i]==0)
	 		ans++;
	 if(ans>m)
	 {
	 	cout<<-1<<endl;
	 	return ;
	 }
	 f(i,1,n)
	 {
		if(ind[scc[i]]==0 && ha[i]==1)
		{
			ok[scc[i]]=1;
		}	 	
	 }	 
	 f(i,1,scc_cnt)
	{
		if(ind[i]==0 && !ok[i])
		{
			cout<<-1<<endl;
			return ;
		}	  
	}
	cout<<ans<<endl;
	return ;

}


int main()
{
	freopen("in","r",stdin);
	while(cin>>n>>m)
	{
		init();
		f(i,1,m)
		{
			cin>>x;
			ha[x]=1;	
		}
		
		f(i,1,n)
		{	
			cin>>x;
			f(j,1,x)
			{
				cin>>y;
				add(i,y);					
			}
		}
		slove(); 
	}
	return 0;

}