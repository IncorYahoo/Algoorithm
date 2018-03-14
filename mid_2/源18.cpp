//#include<iostream>
//using namespace std;
//#define INF 0x7f
//const int N =10005;
//#define  FO(i,L,R) for(int i=L;i<=R;++i)
//#define  FR(i,L,R) for(int i=L;i>=R;--i)
//typedef long long ll ;
//ll ans,x,g[N][N],minn[N];
//bool vis[N];
//int n;
//int prime(){
//	cin>>n;
//	FO(i,1,n)FO(j,1,n)cin>>g[i][j],g[j][i]=g[i][j];
//	memset(minn,INF,sizeof(minn));
//	memset(vis,false,sizeof(vis));
//	minn[1]=0;
//	FO(i,1,n){
//		int k=0;
//		FO(j,1,n)
//			if(!vis[j]&& minn[k]>minn[j])
//				k=j;
//		vis[k]=true;
//		FO(j,1,n){
//			if(!vis[j]&& minn[j]>g[k][j])
//				minn[j]=g[k][j];
//		}
//	}
//	FO(i,1,n)ans+=minn[i];
//	return ans;
//}
//
