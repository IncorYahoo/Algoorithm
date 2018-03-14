//// #include<iostream>
//// #include<string.h>
////#include<queue>
////using namespace std;
////#define INF 0x7f7f7f7f
////const int N =501; 
////typedef long long ll ;
////#define f(i,l,r) for(int i=l;i<=r;++i)
////#define g(i,l,r) for(int i=l;i>=r;--i)
//// int n,m; int ans;
////char a[N][N];
////int s0,s1;
////void dfs(int x,int y){
////    if (x>=n||y>=n||x<0||y<0||a[x][y]=='.') return;
////    (x+y)&1?++s0:++s1;
////    a[x][y]='.';
////    dfs(x+1,y);
////    dfs(x-1,y);
////    dfs(x,y+1);
////    dfs(x,y-1);
////}
////int main()
////{
////	int t ;
////	cin>>t;
////	f(i,1,t)
////	{
////		int ans=0;
////		cin>>m;
////		f(j,0,m-1)cin>>a[j];
////		f(j,0,m-1)f(k,0,m-1)if(a[j][k]=='#')
////		{
////			s0=0;s1=0;
////			dfs(j,k);
////			ans+=min(s0,s1);
////		}
////
////
////		cout<<"Case "<<i<<": "<<ans<<endl; 
////	}
////}