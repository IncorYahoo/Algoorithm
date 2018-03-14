//#include<iostream>
// 
//using namespace std;
//const int N =501; 
//typedef long long ll ;
//
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//int a[N][N];
//int n,m,x,y;
//bool flag ;
//bool vis[N];
//void dfs(int x)
//{
//	flag=false;
//	vis[x]=true;
//	if(x==1)	
//	{
//		flag=true ;
//		return ;
//	}
//	f(i,1,n)
//	{
//		if(!vis[n] && a[x][i]==1)
//		{
//			/*a[x][i]=2;*/
//			dfs(i);
//			/*if(flag)return ;
//			a[x][i]=1;*/
//		}
//
//	}
//
//}
//
//int main()
//{
//	while(cin>>n>>m)
//	{
//		memset(vis,false,sizeof(vis));
//		f(i,1,m)
//		{
//			cin>>x>>y;
//			a[x][y]=1;
//		}
//		dfs(1);
//		if(flag)cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//	return 0;
//}
//
//
//
