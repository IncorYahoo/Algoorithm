///*
//����:incor
//��Ŀ:p2880 ���ܷ���
//*/
////��1��ǰn-1ȦÿȦ����ʱ�����ǰn-1Ȧƽ��ʱ���ľ���ֵû�г�����ǰn-1Ȧƽ��ʱ���10%
////	����С����ʾ����0.1����
////
////��2�������һȦ��������Ȧ�����ģ����Ժ�ǰn-1Ȧ���ܵ����һȦһ���죩��
////
////    �������2��������������˵�����ܷ��䡰�ǳ�����������ڣ�1�����͵�
////	��2������ֻ����һ����˵�����ܷ��䡰һ�����������ڣ�1������2��������������˵�����ܷ��䡰��������
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