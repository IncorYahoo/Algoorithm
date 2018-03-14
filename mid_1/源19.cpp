//#include<iostream>
//using namespace std;
//int n;
//int sum[101];
//int a[101];
//long long dp[101][101];
//#define INF INT_MAX
//void init()
//{
//	cin>>n;
//	for(int i=1;i<=n;++i)
//		cin>>a[i],sum[i]=sum[i-1]+a[i];
//}
//void slove()
//{
//	for(int i=1;i<=n;++i)
//		for(int j=i-1;j>=0;j--)
//		{
//			dp[j][i]=INF;
//			for(int k=j-1;k<i;++k)
//				dp[j][i]=min(dp[j][i],dp[j][k]+dp[k+1][i]+sum[i]-sum[j-1]);
//						 
//		}
//	cout<<dp[1][n];
//}
//
//int main()
//{
//	init();
//	slove();
//
//
//
//	return 0;
//}
//
