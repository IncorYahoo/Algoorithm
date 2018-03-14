//
//#include<iostream>
//using namespace std;
//const int N = 10005;
//int a[N];
//int f[N][N];
//int n;
//
//
//
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;++i)
//		cin>>a[i],a[i+n]=a[i];
//	for(int i=1;i<n;++i)
//			for(int l=i+2,j= 1;l<=2*n;++j,++l)
//				for(int  k=j+1;k<l;k++)
//			        f[j][l]=max(f[j][l],f[j][k]+f[k][l]+a[j]*a[k]*a[l]);
// 
//	int s=0;
//    for(int i=1;i<=n;i++) s=max(s,f[i][i+n]);	
//	cout<<f[1][n]<<endl;
//
//
//	return 0;
//}