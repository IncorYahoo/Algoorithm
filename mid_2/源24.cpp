//#include<iostream> 
//using namespace std;
//#include<string.h>
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//#define INF 0x7f
//const int N=1005;
//bool  vis[N];
//int minn[N];
//int prime(int   g[][5] ,int n )
//{
//	memset(minn,INF,sizeof(minn));
//	memset(vis,false,sizeof(vis));
//	minn[1]=0;
//	int ans=0;
//	f(i,1,n){
//		int k=0;
//		f(j,1,n)
//		if(!vis[j] && minn[k] > minn[j])
//			k=j;
//		vis[k]=true;
//		f(j,1,n){
//			if(!vis[j]&& minn[j]>g[i][j])
//				minn[j]=g[k][j];
//		}
//	}
//	f(i,1,n)
//		ans+=minn[i];
//	return ans;
//}
//
//int main()
//{
//	int n =4;
//	int a[][5]={
//		0, 0, 0, 0 ,0,
//		0,0  ,4  ,9 ,21 ,
//		0,4  ,0  ,8 ,17 ,
//		0,9  ,8  ,0 ,16 ,
//		0,21 ,17 ,16,  0};
//	int ret = prime(a,5 );
//	cout<<ret<<endl;
//
//	system("pause");
//
//	return 0;
//}