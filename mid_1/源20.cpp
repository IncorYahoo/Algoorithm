//#include <iostream>
//#include <climits>
//using namespace std;
//
//const int maxn = 110, INF = INT_MAX;
//int n, a[maxn], sum[maxn], dp[maxn][maxn];
//
//void solve() {
//	for (int i = 1; i <= n; i++)
//		for (int j = i - 1; j >= 0; j--) {
//			dp[j][i] = INF;
//			for (int k = j; k < i; k++)
//				dp[j][i] = min(dp[j][i], dp[j][k] + dp[k+1][i] + sum[i] - sum[j - 1]);
//		}
//	cout << dp[1][n] << endl;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		sum[i] = sum[i - 1] + a[i];
//	}
//	solve();
//	return 0;
//}