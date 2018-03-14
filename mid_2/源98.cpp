//#include<cstdio>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int maxn = 1e5; 
//struct node{
//	int v,nxt;
//} edge[maxn];
//int heads[maxn],cnt;
//int dfn[maxn],low[maxn],tot,stack[maxn],index,vis[maxn];
//int scc_cnt,scc[maxn] ,ind[maxn] ,ans;
//int p[maxn],ok[maxn];
//void add(int x, int y)
//{
//	edge[++cnt].nxt = heads[x];
//	edge[cnt].v = y;
//	heads[x] = cnt;
//}
//void tarjan(int x)
//{
//	dfn[x]=low[x]=++tot;
//	stack[++index] = x;
//	vis[x]=1;
//	for(int i = heads[x];i!=-1;i=edge[i].nxt)
//	{
//		if(!dfn[i])
//		{
//			tarjan(edge[i].v);
//			low[x] = min(low[x],low[edge[i].v]);
//		}
//		else if(vis[edge[i].v])
//		{
//			low[x]=min(low[x],dfn[edge[i].v]);
//		}
//	}
//	if(dfn[x]==low[x])
//	{
//		scc_cnt++;  
//        while(1){
//            int t=stack[index--];
//            scc[t]=scc_cnt;
//            vis[t]=0;
//            if( t== x)
//                break;
//        } 
//	}
// 
//}
//
//
//int ha[maxn];
//int n,m,x,y;
//void init()
//{
//	memset(heads,-1,sizeof(heads));
//	memset(ind,0,sizeof(ind) );
//	memset(edge,0,sizeof(edge) );
//	memset(vis,0,sizeof(vis));
// 
//	cnt=0;
//	tot=0;
//	index=0;
//	scc_cnt =0;
//	ans=0;
//	memset(stack,0,sizeof(stack)); 
//	memset(ok,0,sizeof(ok)); 
//	memset(ha,0,sizeof(ha)); 
//	 
//
//}
//void slove()
//{
//	
//	f(i,1,n)if(!dfn[i])tarjan(i);
//	f(i,1,n)
//		for(int j=heads[i];j!=-1;j= edge[i].nxt )
//		{
//			if(scc[i]!=scc[edge[j].v])
//				ind[scc[edge[j].v]]++;
//		}
//
//	f(i,1,scc_cnt)
//		if(ind[i]==0)
//			ans++;
//	if(ans>m){
//		cout<<-1<<endl;
//		return;
//	}
//	f(i,1,n)
//		if(ind[scc[i]]==-1 && ha[i]==1)
//				ok[scc[i]]=1;
//	f(i,1,n)
//		if(ind[i]==-1 && !ok[i])
//		{
//			cout<<-1<<endl;
//			return;
//	}
//	cout<<ans<<endl;
//	return ; 
//}
//
//int main()
//{
//	freopen("in","r",stdin);
//
//	
//	while(cin>>n>>m)
//	{
//		init();
//
//		f(i,1,m)
//			cin>>ha[i];
//		f(i,1,n)
//		{
//			cin>>x;
//			f(j,1,x)
//			{
//				cin>>y;
//				add(i,y);
//			}
//		}
//		slove();
//
//		
//	}
//
//	//cin>>n>>m;
//	//f(i,1,m){
//	//	cin>>x>>y;
//	//	add(x,y);
//	//}
//
//
//	// f(i,1,n)if(!dfn[i])tarjan(i);
//
// 
//	return 0;
//}