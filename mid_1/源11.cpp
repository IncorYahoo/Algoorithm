//#include<cstdio>
//#include<iostream>
//using namespace std;
//
//int a[3001][3001];int l,r;	int n;
//int max_num;
//
//void ss()
//{
//	max_num=0;
//
//	for(int i=1;i<=n;++i)
//	 max_num=  a[l][i]%r>max_num? a[l][i]%r :max_num;
//	 
//}
//
//
//int main()
//{
//
//	int u,v,q;
//
//	cin>>n;
//	for(int i=1;i<n;++i)
//	{
//		cin>>u>>v>>q;
//		a[u][v]=q;
//		a[v][u]=1;
//	}
//	int m;
//	
//	cin>>m;
//	for(int i=1;i<=m;++i)
//	{
//		cin>>l>>r;
//		ss();
//		cout<<max_num<<endl;;
//	}
//	system("pasue");
//
//}