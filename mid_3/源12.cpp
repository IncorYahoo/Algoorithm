//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//
//const int N = 1000010;
//
//int arr[N];
//
//int main() {
//  // freopen("task.inp", "r", stdin);
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//  int n, a, b;
//  cin >> n >> a >> b;
//  int x, y;
//  for (x = 0; x * a <= n; ++x) {
//    if ((n - a * x) % b == 0) { 
//      y = (n - a * x) / b;
//      break;
//    } 
//  } 
//  int id = 0;
//  for (int t = 1; t <= x; ++t) {
//    for (int i = id + 1; i < id + a; ++i) {
//      arr[i] = i + 1;
//    } 
//    arr[id + a] = id + 1;
//    id += a;
//  }
//  for (int t = 1; t <= y; ++t) {
//    for (int i = id + 1; i < id + b; ++i) {
//      arr[i] = i + 1;
//    } 
//    arr[id + b] = id + 1;
//    id += b;
//  }
//  for (int i = 1; i <= n; ++i) {
//    cout << arr[i] << ' ';
//  }
//}