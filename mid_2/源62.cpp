//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//#define INF 0x7f 
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//#define mod 1000000007
//const int N = 2000000;
// using namespace std;
// 
//const int maxn = 1e5 + 10;
//int n, m;
//int op[maxn], L[maxn], R[maxn], x[maxn];
//int h[maxn], v[maxn * 10], w[maxn * 10], nx[maxn * 10];
//int sz;
//int ans[maxn];
// 
//int dis[maxn], f[maxn];
//int sum[maxn];
// 
//void init() {
//  for(int i = 0; i <= n; i ++) {
//    h[i] = -1;
//    sum[i] = 0;
//  }
//  sz = 0;
//}
// 
//void add(int a, int b, int c) {
//  //printf("%d -> %d : %d\n", a, b, -c);
//  v[sz] = b;
//  w[sz] = -c;
//  nx[sz] = h[a];
//  h[a] = sz ++;
//}
// 
//void spfa() {
//  queue<int> q;
//  for(int i = 0; i <= n; i ++) {
//    dis[i] = maxn;
//    f[i] = 0;
//  }
//  dis[0] = 0;
//  q.push(0);
//  f[0] = 1;
//  while(!q.empty()) {
//    int top = q.front();
//    q.pop();
//    f[top] = 0;
//    for(int i = h[top]; i != -1; i = nx[i]) {
//      if(dis[top] + w[i] < dis[v[i]]) {
//        dis[v[i]] = dis[top] + w[i];
//        if(f[v[i]] == 0) {
//          f[v[i]] = 1;
//          q.push(v[i]);
//        }
//      }
//    }
//  }
//}
// 
//int main() {
//  scanf("%d%d", &n, &m);
//  for(int i = 1; i <= m; i ++) {
//    scanf("%d%d%d%d", &op[i], &L[i], &R[i], &x[i]);
//  }
//  for(int t = 0; t < 20; t ++) {
//    init();
//    // 0 <= sum[x] - sum[x - 1] <= 1
//    // ! sum[x] - sum[x - 1] >= 0
//    // ! sum[x - 1] - sum[x] >= -1
//    for(int i = 1; i <= n; i ++) {
//      add(i - 1, i, 0);
//      add(i, i - 1, -1);
//    }
//    for(int i = 1; i <= m; i ++) {
//      if(op[i] == 1) {
//        if(x[i] & (1 << t)) {
//          // [L, R] 至少有一个1
//          // sum[R] - sum[L - 1] >= 1
//          add(L[i] - 1, R[i], 1);
//        } else {
//          // [L, R] 全为0
//          // 0 <= sum[R] - sum[L - 1] <= 0
//          // ! sum[R] - sum[L - 1] >= 0
//          // ! sum[L - 1] - sum[R] >= 0
//          add(L[i] - 1, R[i], 0);
//          add(R[i], L[i] - 1, 0);
//        }
//      } else {
//        if(x[i] & (1 << t)) {
//          // [L, R] 全为1
//          // R - L + 1 <= sum[R] - sum[L - 1] <= R - L + 1
//          // ! sum[R] - sum[L - 1] >= R - L + 1
//          // ! sum[L - 1] - sum[R] >= -(R - L + 1)
//          add(L[i] - 1, R[i], R[i] - L[i] + 1);
//          add(R[i], L[i] - 1, -(R[i] - L[i] + 1));
//          sum[L[i]] ++;
//          sum[R[i] + 1] --;
//        } else {
//          // [L, R] 不全为1
//          // 0 <= sum[R] - sum[L - 1] <= R - L
//          // ! sum[R] - sum[L - 1] >= 0
//          // ! sum[L - 1] - sum[R] >= L - R
//          add(L[i] - 1, R[i], 0);
//          add(R[i], L[i] - 1, L[i] - R[i]);
//        }
//      }
//    }
//    for(int i = 1; i <= n; i ++) {
//      sum[i] += sum[i - 1];
//    }
//    for(int i = 1; i <= n; i ++) {
//      if(sum[i]) sum[i] = 1;
//    }
//    for(int i = 1; i <= n; i ++) {
//      sum[i] += sum[i - 1];
//      add(0, i, sum[i]);
//    }
//    spfa();
//    for(int i = 1; i <= n; i ++) {
//      dis[i] = -dis[i];
//    }
//    for(int i = n; i >= 1; i --) {
//      dis[i] = dis[i] - dis[i - 1];
//    }
//    for(int i = 1; i <= n; i ++) {
//      ans[i] = ans[i] + dis[i] * (1 << t);
//    }
//  }
//  for(int i = 1; i <= n; i ++) {
//    printf("%d", ans[i]);
//    if(i < n) printf(" ");
//    else printf("\n");
//  }
//  return 0;
//}
// 
///*
// v[j] - v[i] >= k, 问v[t] - v[s]最小值
// 建边 i -> j, 权值为k, s到t的最长路就是答案
// */