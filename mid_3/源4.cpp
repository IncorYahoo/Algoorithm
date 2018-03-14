//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//typedef long long LL;
//
//const int maxn = 60;
//int n,m;
//
//LL A[maxn], B[maxn];
//
//int main() {
//    scanf("%d%d", &N, &M);
//    for (int i = 1; i <= N; i++) {
//        scanf("%lld", &A[i]);
//    }
//    for (int i = 1; i <= M; i++) {
//        scanf("%lld", &B[i]);
//    }
//    LL I = -1000000000000000001;
//    LL tmp = I;
//    int flag = 1;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            LL t = A[i] * B[j];
//            if (t > tmp) {
//                tmp = t;
//                flag = i;
//            }
//        }
//    }
//    tmp = I;
//    for (int i = 1; i <= N; i++) {
//        if (i == flag) continue;
//        for (int j = 1; j <= M; j++) {
//            LL t = A[i] * B[j];
//            if (t > tmp) {
//                tmp = t;
//            }
//        }
//    }
//    printf("%lld\n", tmp);
//    return 0;
//}