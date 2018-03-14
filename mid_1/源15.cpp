//#include<iostream>
//using namespace std;
//int n,k;
//int dp[300][10];
//int main()
//{
//	cin>>n>>k;
//	dp[0][0]=1;	
//	for(int j=1;j<=k;++j)
//		for(int i=1;i<=n;++i)
//			if(i>=j)
//				dp[i][j]+=dp[i-1][j-1]+dp[i-j][j];
//	cout<<dp[n][k]<<endl;
//
//
//
//
//
//	return 0;
//}