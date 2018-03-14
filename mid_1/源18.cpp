//#include<iostream>
//#include<cstring>
//#include<climits>
//#define MAXN 53
//#define MAXM 12
//#define INF 1000000
//using namespace std;
//int N,M;
//int n[MAXN*2];
//int SumMod10[MAXN*2][MAXN*2];
//int d[MAXN][MAXM];
//int p[MAXN][MAXM];
//int MIN=INT_MAX;
//int MAX=INT_MIN;
//int main()
//{
//    cin>>N>>M;
//    for(int i=1;i<=N;i++)
//    {
//        cin>>n[i];
//        n[i+N]=n[i];
//    }
//    for(int i=1;i<=N*2;i++)
//    {
//        SumMod10[i][i]=n[i];
//        for(int j=i+1;j<=N*2;j++)
//            SumMod10[i][j]=SumMod10[i][j-1]+n[j];
//    }
//    for(int i=1;i<=N*2;i++)
//        for(int j=i;j<=N*2;j++)
//        {
//            SumMod10[i][j]=((SumMod10[i][j]%10)+10)%10;
//        }
//    if(M==1)
//    {
//        MIN=MAX=SumMod10[1][N];
//    }
//    else
//        for(int s=0;s<N;s++)
//        {
//            for(int i=0;i<=N;i++)
//            {
//                for(int j=0;j<=M;j++)
//                {
//                    d[i][j]=INF;
//                    p[i][j]=0;
//                }
//            }
//            d[0][0]=p[0][0]=1;
//           for(int i=1;i<=N;i++)
//            {
//                for(int j=1;j<=min(i,M);j++)
//                {
//                    for(int k=j-1;k<=i-1;k++)
//                    {
//                        d[i][j]=min(d[i][j],d[k][j-1]*SumMod10[s+k+1][s+i]);
//                        p[i][j]=max(p[i][j],p[k][j-1]*SumMod10[s+k+1][s+i]);
//                    }
//                }
//            }
//            MIN=min(MIN,d[N][M]); 
//            MAX=max(MAX,p[N][M]);
//        }
//    cout<<MIN<<endl<<MAX<<endl;
//    return 0;
//
//}