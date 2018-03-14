//#include<iostream>
//using namespace std;
//const int N=10005;
//int a[N][N],b[N][N];
//int n,m;
//// Ì°ÐÄ 
//#define pow(i,n) ((i)<<(n))
//
//
//int main()
//{
//	 
//
//
//	cin>>n>>m;
//	for(int i=1;i<=n;++i)
//		for(int j=1;j<=m;++j)
//			cin>>a[i][j];
//	//Ì°ÐÄ 
//	long long  h = 0;
//
//	for(int j=1;j<=m;++j)
//	{ 
//		int s=0;
//		for(int i=1;i<=n;++i) //ÐÐºÅ
//		{
//			 int l=1;int r=m;
//
//			 while(b[i][l++]==1);
//			 while(b[i][r--]==1);
//			if(b[i][l]>b[i][r])
//				s+=b[j][r]*pow(2,j),b[j][r]=1;
//			else 
//				s+=b[j][l]*pow(2,j),b[j][l]=1;
//		}
//		h+=s;
//	}
//	cout<<h<<endl;
//	return 0;
//
//}