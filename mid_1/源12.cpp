//#include<iostream>
//using namespace std;
//#define ll long long 
//ll f[100][100];
//int a[100][100],a1[100];
//int n,m;
//int i,j,k;
//char c;
//
//
//
//int main()
//{
//	cin>>n>>m;
//	for(i=1;i<=n;++i)
//		cin>>c,a1[i]=c-'0';
//	//预处理数据
//	for(i=1;i<=n;++i)
//		for(int j=i;j<=n;++j)
//			a[i][j]=a[i][j-1]*10+a1[j];
//	for(int i=1;i<=n;i++) f[i][0]=a[1][i];
//	for(i=1;i<=n;++i)
//		for(j=1;j<=m;++j)
//			for(k=1;k<i;++k)
//				f[i][j]=max(f[i][j],f[k][j-1]*a[k+1][i]);
//	cout<<f[n][m]  ;
//	return 0;
//}
//
//
