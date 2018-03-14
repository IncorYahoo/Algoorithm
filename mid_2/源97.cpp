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
//
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
//		do{
//			cout<< stack[index]<<" ";
//			vis[stack[index]]=0;
//			index -- ;
//		}while(x != stack[index+1]);
//		cout<<endl;
//	}
// 
//}
//
//
//
//int main()
//{
//	freopen("in","r",stdin);
//	memset(heads,-1,sizeof(heads));
//	int n,m,x,y;
//	cin>>n>>m;
//	f(i,1,m){
//		cin>>x>>y;
//		add(x,y);
//	}
//	f(i,1,n)if(!dfn[i])tarjan(i);
//
// 
//	return 0;
//}