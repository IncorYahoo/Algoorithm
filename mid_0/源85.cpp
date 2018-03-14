///*
//作者:incor
//题目:p2880 体能分配
//*/
////（1）前n-1圈每圈所需时间和跑前n-1圈平均时间差的绝对值没有超过跑前n-1圈平均时间的10%
////	（用小数表示就是0.1）；
////
////（2）跑最后一圈是跑所有圈中最快的（可以和前n-1圈中跑得最快一圈一样快）。
////
////    如果上述2个条件都满足则说明体能分配“非常合理”，如果第（1）条和第
////	（2）条中只满足一条则说明体能分配“一般合理”，如果第（1）、（2）条都不满足则说明体能分配“不合理”。
//// 
//#include <iostream>
//using namespace std;
//#include<cmath>
//int a[101]; 
//int n;
//int ss()
//{
//	int flag =0;
//	double tmp =0  ,sum =0;
//	int count =0;
//	for(int i=1;i<n;i++)
//		sum+=a[i];
//	double tt = sum/(n-1);
//
//	for(int i=1;i<n;i++)
//		 if(abs(tt-a[i]) <= tt*0.1) count++;
//	if(count == n-1)
//		flag++;
//
//	 count =0;
//	for(int i=1;i<n;i++)
//		if(a[i] >= a[n])
//			count++;
//	if(count == n-1)
//		flag++;
//
//	
//
//	return flag;
//}
//int main()
//{
// 
//  cin>>n;
//  for(int i=1;i<=n;i++)
//	  cin>>a[i];
//  int tmp=ss();
//  switch(tmp)
//  {
//  case 2:
//	  cout<<"Good"<<endl;
//	  break;
//  case 1:
//	  cout<<"Pass"<<endl;
//	  break;
//  case 0:
//	  cout<<"Bad"<<endl;
//	  break;
//  default:
//	  break;
//  }
//
// 
//
//}
// 