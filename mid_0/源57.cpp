//// 
////作者:incor
////题目:p1792 分解质因数
//// 
//
// 
//#include <bits/stdc++.h>
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
//	 for(int j=0; j< nprime   ;j++)
// 		{
// 			 cout<<prime[j]<<" ";
//
// 		}
// }
//int main()
//{
//    int b;
//	cin>>b;
//	ss(b);
//  
//
//
//}
// 