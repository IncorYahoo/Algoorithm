//# include <iostream>
//# include <vector>
//# include <string>
//# include <map>
//# include <iomanip>
//# include <math.h>
//# include <time.h>
//# include <algorithm>
//# include <deque>
//# include <queue>
//# include <stdio.h>
//
//# define mk make_pair
//# define fr first
//# define sc second
//# define pb push_back
//# define sz(a) a.size()
//
//using namespace std;
//
//const int N = (int)(1e6 + 5);
//const int inf = (int)1e9 + 7;
//
//int n,a,b;
//int cnt = 1;
//int nn;
//vector <int> v;
//
// main () {
//    scanf ("%d%d%d", &n,&a,&b);
//
//    nn = n;
//
//    if (a > b)
//        swap(a,b);
//
//     while (nn > 0) {
//        if (nn % b == 0)
//            break;
//        for (int j = cnt + 1; j < cnt + a; j ++)
//            v.pb(j);
//
//        v.pb(cnt);
//        cnt += a;
//        nn -= a;
//    }
//    if (nn < 0)
//        cout << "-1";
//    else {
//        while (nn > 0) {
//            for (int j = cnt + 1; j < cnt + b; j ++)
//                v.pb(j);
//
//            v.pb(cnt);
//            cnt += b;
//            nn -= b;
//        }
//        for (int i = 0; i < v.size(); i ++)
//            cout << v[i] << " ";
//    }
//}