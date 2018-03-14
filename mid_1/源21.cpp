//#include<iostream>
//using namespace std;
//#define INF INT_MAX
//int a[1000];
//int sum[1000];
//long long dp[1000][1000];
//int n;
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;++i)
//		cin>>a[i],sum[i]=sum[i-1]+a[i];
//
//	for(int i=1;i<=n;++i)
//		for(int j=i-1;j>=0;--j)
//		{
//			dp[j][i]=INF;
//			for(int k=j-1;k<i;++k)
//				dp[j][i] =min(dp[j][i],dp[j][k]+dp[k+1][i]+sum[i]-sum[j-1]);
//		}
//	cout<<dp[1][n];
//}