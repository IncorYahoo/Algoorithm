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
//using namespace std;
//#define ll long long
//#define mst(a,x) memset(a,x,sizeof(a))
//#define For(i, t) for(int i = 0; i < t; i++)
//#define Debug(x) cerr << #x << " = "  << x << endl;
//using namespace std;
//
//const int N = 2 * 1e5 + 5;
//int a[N], sum[N], n, s, f;
//int main() {
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++) scanf("%d", a + i);
//    scanf("%d%d", &s, &f);
//    for(int i = n; i < n + n; i++) a[i] = a[i - n];
//    for(int i = 0; i < n + n; i++) {
//        if(!i) sum[i] = a[i];
//        else sum[i] = sum[i - 1] + a[i];
//    }
//    int len = f - s;
//    int mx = -1, ans = 1;
//    int t = s;
//    for(int i = 0; i < n; i++) {
//        int cnt = i ? sum[i + len - 1] - sum[i - 1] : sum[i + len - 1];
//        Debug(cnt);
//        if(cnt > mx || cnt == mx && t < ans) {
//            mx = cnt;
//            ans = t;
//        }
//        t--;
//        if(t == 0) t = n;
//    }
//    printf("%d\n", ans);
//
//	return 0;
//}