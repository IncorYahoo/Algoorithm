///*
//作者:incor
//题目:p2474 亲密数
//*/
// 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  int n;
//  cin>>n;
//  long long a[101];
//  long long b,c,d=0;
//  bool flag=1;
//  for(int i=0;i<n;i++)
//  {
//	  cin>>a[i];  
//	  if(i!=0)
//	  {
//		 b=abs(a[i]-a[i-1]);
//		 if(flag)
//			 d=b,flag=0,c=i-1;
//		 if(d>b)
//			  d=b ,c=i-1;
//	  }
//  }
//  cout<<a[c]<<" "<<a[c+1]<<endl;
//	
// 
//
//}
// 