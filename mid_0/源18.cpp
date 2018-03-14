//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    char c1[12][12],c2[12][12];
//    int a[9];
//    for(int i=0;i<9;i++) a[i]=0;
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//            cin>>c1[i][j];
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//            cin>>c2[i][j];
//    for(int i=0;i<n;i++)
//        for(int j=0;j<n;j++)
//        {
//            if(c2[i][j]==c1[j][n-1-i]) a[1]++;
//            if(c2[i][j]==c1[n-1-i][n-1-j]) a[2]++;
//            if(c2[i][j]==c1[n-1-j][i]) a[3]++;
//            if(c2[i][j]==c1[i][n-1-j]) a[4]++;
//            if(c2[i][n-1-j]==c1[j][n-1-i]) a[5]++;
//            if(c2[i][n-1-j]==c1[n-1-i][n-1-j]) a[6]++;
//            if(c2[i][n-1-j]==c1[n-1-j][i]) a[7]++;
//            if(c2[i][j]==c1[i][j]) a[8]++;
//        }
//    for(int i=1;i<9;i++)
//        if(a[i]==n*n)
//        {
//            if(i<5) cout<<i;
//            else if(i==8) cout<<6;
//            else cout<<5;
//            return 0;
//        }
//    cout<<7;
//	system("pause");
//    return 0;
//}