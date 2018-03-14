// #include<iostream>
// #include<string.h>
//#include<queue>
//using namespace std;
//#define INF 0x7f7f7f7f
//const int N =501; 
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
// int n,m; int ans;
//char g[N][N];
//struct Node{
//	int x,y,step;
//}s,e,k;
//bool vis[N][N];
//int dx[]={-1,0,0,1};
//int dy[]={0,-1,1,0};
//void bfs(Node s,Node e,bool key)
//{
//	memset(vis,0,sizeof(vis));
//	Node f ;
//	queue<Node> q ;
//	f.x=s.x;f.y=s.y;f.step=s.step;
//	q.push(f);
//	while(q.size())
//	{
//		Node t = q.front();
//		q.pop();
//		f(i,0,3)
//		{ 
//			int x=dx[i]+t.x;
//			int y=dy[i]+t.y;
//			 
//			if(x>=1&& x<=n-1&&y>=1&&y<=m-1 &&!vis[x][y] 
//			&&g[x][y]!='W'&&g[x][y]!='D'||(g[x][y]=='D'&&key ==true) )
//			{
//				if(g[x][y]=='E')
//				{
//					ans=min(ans,t.step+1);
//					return ;
//				}
//				else if(g[x][y] =='K')
//					k.step=t.step+1;
//				vis[x][y]=true;
//				Node tmp ;tmp.x=x;tmp.y=y;tmp.step=t.step+1;
//				q.push(tmp);
//
//			}
//
//		}
//
//
//
//
//	}
//}
//int main(){
//	cin>>n>>m;
//	f(i,1,n)cin>>g[i];
//	f(i,1,n)f(j,1,m){
//		if(g[i][j] == 'S')
//		{
//			s.x = i;s.y=j;s.step = 0;
//		}
//		else if(g[i][j] == 'E')
//		{
//			e.x=i;e.y=j;
//		}
//		else if(g[i][j] == 'K')
//		{
//			k.x=i;k.y=j;k.step=-1;
//		}
//	}
//	ans =INF;
//	bfs(s,e,false);
//	if(k.step!=-1)bfs(k,e,true);
//	if(ans ==INF)cout<<-1<<endl;
//	else cout<<ans<<endl;
//	return 0;
//}