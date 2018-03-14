///*
//作者:incor
//题目:p1204 寻找子串位置
//*/
//
// 
//#include <iostream>
//using namespace std;
//#include <string.h>
//char a[100],b[100];
//int main()
//{
//    
//    cin >> a >> b;  
//    int l=strlen(a);
//	int r=strlen(b);
//	int j=0,ans;
//
//	for(int i=0;i<l;i++)
//	{
//		if(j==0)
//		{
//			if(a[i]==b[j])
//			{
//				j++;
//				ans =i;
//			}
//			
//		}
//		else{
//			if(a[i]==b[j])
//			 
//				j++;
//			else
//			{
//				j=0;i--;
//			}
//		
//		}
//		
//			 
//	}
//	cout<<ans+1<<endl;
//	 
//}
// 