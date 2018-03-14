//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//#include <map>
//#include <set>
//#include <stack>
//#include <queue>
//#include <deque>
//#include <cassert>
//#include <list>
// 
//#define mp make_pair
//#define pb push_back
//#define fi first
//#define se second
//#define SZ(x) ((int) (x).size())
//#define all(x) (x).begin(), (x).end()
//#define sqr(x) ((x) * (x))
//#define clr(a,b) (memset(a,b,sizeof(a)))
//#define y0 y3487465
//#define y1 y8687969
//#define fastio std::ios::sync_with_stdio(false)
//#define AC
//using namespace std;
//
//typedef long long ll;
//
//const ll INF = 1e18 + 7;
//const int maxn = 4e5 + 7;
//const int maxm = 21;
//
//int n, m, k, fa[maxn][maxm];
//ll w[maxn], sum[maxn][maxm];
//
//int main() {
//#ifdef AC
//    freopen("data.txt", "r", stdin);
//#endif
//	int q, op;
//	ll R, W; 
//	scanf("%d", &q);
//	int cur = 1;
//	ll ans = 0;
//	for(int i=0;i<20;i++)sum[1][i]=INF;
//	w[0] = INF;
//	w[1] = 0;
//	while(q--) {
//		scanf("%d%lld%lld", &op, &R, &W);
//		R ^= ans;
//		W ^= ans;
//		if (op == 1) {
//			w[++cur] = W;
//			if (w[cur] <= w[R]) fa[cur][0] = R;
//			else {
//				int from = R;
//				for (int i = 19; i >= 0; i--) {
//					if (w[fa[from][i]] < w[cur])
//						from = fa[from][i];
//				}
//				fa[cur][0] = fa[from][0];
//			}
//			sum[cur][0] = (fa[cur][0]==0?INF:w[fa[cur][0]]);
//			for (int i = 1; i < 20; i++) {
//				fa[cur][i] = fa[fa[cur][i-1]][i-1];
//				sum[cur][i] = (fa[cur][0]==0?INF:sum[cur][i-1]+sum[fa[cur][i-1]][i-1]);
//			}
//		} else {
//			if (w[R] > W) puts("0"), ans = 0;
//			else {
//				W -= w[R];
//				ans = 1;
//				for (int i = 19; i >= 0; i--) {
//					if (sum[R][i] <= W) {
//						ans += (1 << i);
//						W -= sum[R][i];
//						R = fa[R][i];
//					}
//				}
//				printf("%lld\n", ans);
//			}
//		}
//	}
//	return 0;
//}