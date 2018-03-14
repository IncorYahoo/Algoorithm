///*
//作者:incor
//题目:p1425 最长公共子串
//*/
// 
//#include <iostream>
//using namespace std;
//#include<string>
//#define N 20
//
//string x[N];
//int n;
//bool Find (string s)
//{
// 
//	int count =0;
//	for(int i=1;i<n;i++)
//	{
//		int k=0;
//		for(int j=0;j<x[i].size();j++)
//		{
//			if(s[k] == x[i][j])
//			{
//				k++;
//				if(k==s.size())
//				{
//					count++;
//					break;
//				}
//			}
//			else 
//			{
//				k=0;
//				if(s[k] == x[i][j])
//				{
//					k++;
//				}
//			}
//
//		}
//	}
//	if(count == n-1)
//		return true;
//	else  return false;
//
//}
//int main()
//{ 
//	cin>>n;
//	for(int i=0;i<n;i++)
//		cin>>x[i];
//	int max =0;
//	string tmp;
//	for(int i=0;i<=x[0].size();i++)
//	{
//		string s ;
//		for(int j=i;j<=x[0].size();j++)
//		{
//			 s+=x[0][j];
//			 if(Find(s))
//			 {
//				 if(max<s.size())
//				 {
//					 max=s.size();
//					 tmp=s;
//				 }
//			 }  
//
//		}
//		s.clear();
//	}
//		
//	cout<<tmp<<endl;
//} 