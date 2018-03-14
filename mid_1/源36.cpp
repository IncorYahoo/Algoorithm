//#include<iostream>
//using namespace std;
// 
//#include<iomanip>
//#define FO(i,L,R) for(int i=L;i<=R;++i)
//#define FR(i,L,R) for(int i=L;i>=R;--i)
//const  int N= 10005;
//int dp[N][N];
//int n,l,r,m,L,R;
// 
//int main()
//{
//	cin>>n>>l>>r>>m>>L>>R;
//	int countA=0,countB=0;
//  
//        
//	FO(i,l,r)
//		FO(j,L,R)
//			{
//				if(i>j)
//				countA++;
//				if(i<j)
//				countB++;
//			}
//    if(countA==0&&countB==0)
//	 cout<<fixed<<setprecision(5)<<(double)0.0<<endl; 
//	else 
//        cout<<fixed<<setprecision(5)<<(double)(n*countA)/(n*countA+m*countB)<<endl;
//	return 0;
//
//	 
//}