///*
//作者:incor
//题目:p1792 分解质因数
//*/
//
// 
//#include "stdc++.h"
//   
// int k[100000]={1,1};
// int nprime=0;
// 
// int prime[10000];
// 
// 
// 
// void ss(int b)
// {
// 	 
// 	for(int i=2;i<b;i++)
// 	{
// 		if(!k[i])
// 			prime[nprime++]=i;
// 		for(int j=0; j< nprime &&  i*prime[j]< b ;j++)
// 		{
// 			k[i*prime[j]] =1;
// 			if(!i%prime[j])break;
// 		}
// 	}
//	cout<<b<<"=";
//	int i=0;
//	while( b!=1 )
//	{
//		if(b%prime[i]==0)
//		{
//			b/=prime[i];
//			if(b==1)
//				cout<<prime[i] ;
//			else cout<<prime[i]<<"*";
//		}
//			
//		else i++;
//	}
//   
// }
//int main()
//{
//    int b;
//	cin>>b;
//	ss(b);
//   system("pause");
//
//
//}
// 