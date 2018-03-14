//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cmath>
//#include<cstring>
//#define f(i,l,r) for(int i=l;i<=r;i++)
//#define maxn 101
//using namespace std;
//typedef long long ll;
//ll ans,x,g[101][101],minn[maxn];
//int fa[maxn] ,n,m;
//bool vis[maxn];
//int main() {
//	ios::sync_with_stdio(false);
//	cin>>n;
//	f(i,1,n)
//	f(j,1,n)
//	cin>>g[i][j];
//	memset(minn,0x7f,sizeof(minn));
//	minn[1]=0;
//	memset(vis,false,sizeof(vis));
//	f(i,1,n) {
//		int k=0;
//		f(j,1,n)
//		if(!vis[j]&&(minn[k]>minn[j]))
//			k=j;
//		vis[k]=true;
//		f(j,1,n)
//		if(!vis[j]&&(minn[j]>g[k][j]))
//			minn[j]=g[k][j];
//	}
//	f(i,1,n)
//	ans+=minn[i];
//	cout<<ans<<endl;
//}