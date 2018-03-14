//#include <bits/stdc++.h>
//using namespace std;
//int n,m;
//double tmp;
//double p[10][200],dp[200][1<<7];
// 
//int main ( )
//{
//    while(cin>>n>>m)
//    {
//        memset(dp,0,sizeof(dp));
//        for(int i=0;i<n;i++)
//        {
//            for(int j=1;j<=m;j++)
//            {
//               cin>>p[i][j];
//            }
//        }
// 
//        for(int i=1;i<=m;i++)
//        {
//            for(int j=0;j<(1<<n);j++)
//            {
//                for(int k=0;k<n;k++)
//                {
//                    if((1<<k)&j)
//                    {
//                        tmp = 0.0;
//                        for(int t=1;t<=i;t++)
//                        {
//                            tmp+=(1+dp[i-t][j-(1<<k)])*p[k][t];
//                        }
//                        dp[i][j] = max(dp[i][j],tmp);
//                    }
//                }
//            }
//        }
//        printf("%.5lf\n",dp[m][(1<<n)-1]);
// 
// 
//    }
//    return 0;
//}