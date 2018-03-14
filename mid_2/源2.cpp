///*
//作者:incor
//题目:p1220 数字三角形
//*/
// 
//#include <iostream>
//using namespace std;
//#define  FO(i,L,R) for(int i=L;i<=R;++i)
//#define  FR(i,L,R) for(int i=L;i>=R;--i)
//const  int N =105;
//
//int n;
//long long dp[N][N];
//int main()
//{
//	cin>>n;
//	FO(i,1,n)
//		FO(j,1,i)
//		cin>>dp[i][j];
//	FO(i,1,n)
//		FO(j,1,i)
//		dp[i][j] =max(dp[i][j]+dp[i-1][j],dp[i][j]+dp[i-1][j-1]);
//
//	long long ans =dp[n][1];
//	FO(i,1,n) 
//		ans = max (ans ,dp[n][i]);
//	cout<<ans<<endl;
//	return 0;
//}
// 