///*
//作者:incor
//题目:p1385 挤牛奶
//*/
// 
//#include <iostream>
//using namespace std;
//int aa[10000000]={0};
//
//int main()
//{ 
//	int n ;
//	cin>>n;
//	int begin,end ,max =0 ,min =0;
//	int a,b;
//	bool flag =true;
//	int i ;
//
//	while(n--)
//	{
//		cin>>a>>b;
//		if(flag )
//		{
//			begin = a ;
//			end   = b;
//			flag = false;
//		}
//		for( i = a;i <= b;i++)
//		{
//			aa[i] =1;
//		}
//		begin= a <begin?a:begin;
//		end= b>end?b:end;
//	}
//	int tmp=0,tmp2=0;
//	for(i=begin ;i<=end;i++)
//	{
//		if(aa[i] == 1    )
//		{
//			if(tmp2 == 0 )tmp++;
//			else
//			{
//  				max = max > tmp?max:tmp;
//				tmp=0;
//			}
//		}
//			
//		if(aa[i] == 0   )
//		{
//			if(tmp == 0 )tmp2++;
//			else 
//			{
//					min = min > tmp2?min:tmp2;
//					tmp2=0;
//			}
//		}
//		 
//
//	}
//	cout<< max <<" " <<min <<endl; 
//
//
//
//	system("pause");
//} 