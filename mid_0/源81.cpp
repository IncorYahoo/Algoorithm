//#include<iostream>
//#include<iomanip>
//using namespace std;
// 
//int main() {
//   int x,y,q;
//   cin>>x>>y>>q;
//   double p =1.0*q/1000;
//   double sp=1,ans =0;
//   for(int i=0;i<100000;i++)
//   {
//	   long long v =(i+1)*y;
//	   v=(v+x-1)/x;
//	   ans+= v*p*sp;
//	   sp*=1-p;
//
//   }
//   cout<<fixed<<setprecision(18)<<ans<<endl;
//
//
//}
//
//using namespace std;
// 
//int main() {
//    int x, y, q;
//    cin >> x >> y >> q;
//    double p = 1.0 * q / 10000;
//    double sp = 1, ans = 0;
//    for (int i = 0; i < 100000; ++i) {
//        long long v = (i + 1) * y;
//        v = (v + x - 1) / x;
//        ans += v * p * sp;
//        sp *= 1 - p;
//    }
//    printf("%.20f\n", ans);
//    return 0;
//}