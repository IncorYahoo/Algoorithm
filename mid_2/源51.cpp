//#include <iostream>  
//#include <algorithm>  
//#include <cstdio>  
//#include <cstring>  
//#include <string>  
//#include <cstdlib>  
//#define LL long long  
//using namespace std;  
//using namespace std;
//const int N=100005;
//int num[N];
//long long int sum[N];
//long long int res;
// 
//int main()
//{
//    int n;
//    while(cin>>n)
//    {
//        sum[0]=0;
//        for(int i=1;i<=n;i++)
//        {
//            cin>>num[i];
//            sum[i]=sum[i-1]+num[i];
//        }
//        res=2*0x3f3f3f3f;
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=i+1;j<=i+1100&&j<=n;j++)
//            {
//                long long int ans=(i-j)*(i-j)+(sum[j]-sum[i])*(sum[j]-sum[i]);
//                res=min(ans,res);
//            }
//        }
//      cout<<res<<endl;
//    }
//    return 0;
//}