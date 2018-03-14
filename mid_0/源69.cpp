///*
//作者:incor
//题目:p2607 图形输出
//*/
// 
//#include <iostream>
//using namespace std;
//int a[200][200]={0};
//void ss(char c,int n)
//{
//	switch (c)
//	{
//	case 'Z':
//	{
//		for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<"*"; cout<<endl;}
//	}
//		break;
//	case 'L':
//	{
//	/*	for(int i=0;i<n;i++) for(int j=n-1-i;j< n-1+1;j++) a[i][j]=1;
//		for(int i=n;i<2*n-1;i++) for(int j=i-n+1;j<= 2*n-i-1;j++) a[i][j]=1;
//		for(int i=0;i<2*n-1  ;i++) 
//			{
//				for(int j=0;j< 2*n-1 ;j++) if(a[i][j]==1)cout<<"*";else cout<<" ";
//				cout<<endl;
//			}
//*/
//		for(int i=1;i<=n;i++)
//			for(int j=n-i+1;j<=n+i-1;j++)
//				a[i][j]=1;
//		for(int i=n+1;i<=2*n-1;i++)
//			for(int j=i-n+1;j<=3*n-i-1;j++)
//				a[i][j]=1;
//		for(int i=1;i<=2*n-1;i++){
//			for(int j=1;j<=2*n-1;j++)
//				if(a[i][j]==1)cout<<"*";else cout<<" ";
//			cout<<endl;}
//
//
//	}
//		break;
//
//	}
//}
//int main()
//{
//   char c;
//   int n;
//   cin>>c>>n;
//   ss(c,n);
//   system("pause");
//
//
//}
// 