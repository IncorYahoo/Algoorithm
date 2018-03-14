//#include<iostream>
//
//#define ll long long
//
//using namespace std;
//
//int n,m,a[50][50],a1[50];
//
//char c;
//
//ll f[50][50];
//
//int main()
//
//{
//
//     cin>>n>>m;
//
//     for(int i=1;i<=n;i++) cin>>c,a1[i]=c-'0'; 
//
//     for(int i=1;i<=n;i++)
//
//         for(int j=i;j<=n;j++)  
//
//             a[i][j]=a[i][j-1]*10+a1[j];
//
//     for(int i=1;i<=n;i++) f[i][0]=a[1][i];
//
//     for(int i=1;i<=n;i++)
//
//          for(int j=1;j<=m;j++)
//
//               for(int k=1;k<i;k++)
//
//                    f[i][j]=max(f[i][j],f[k][j-1]*a[k+1][i]);
//
//     cout<<f[n][m];
//
//}