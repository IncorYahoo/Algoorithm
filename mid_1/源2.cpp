///*
//作者:incor
//题目:p1842 递归第一次
//*/
//
// 
//#include <iostream>
//using namespace std;
//long long s =1;
//
//int ff(int n)
//{
//	if(n==1)
//	{
//		s++;return 1;
//	}
//	else if(n%2==1) 
//	{
//		s++;
//		 ff(3*n+1);
//	}
//	else 
//	{
//		s++;
//		  ff(n/2);
//	}
//	return -1;
//
//}
//int main()
//{
//   int n,tmp;
//   cin>>n;
//   for(int i=1;i<=n;++i)
//   {
//       cin>>tmp;
//	   s=1;
//
//	  if(ff(tmp))
//	    cout<<s<<endl;
//   }
//
//}
// 