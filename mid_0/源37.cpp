///*
//作者:incor
//题目:p1439 统计素数个数
//*/
///* 于所有数据，L,R<=21000， 区间长度R-L<=4000*/
//const int n = 21000 ;
//int a[n]={1,1};
//int prime[n];
//int nprime;
//
//
//void xianxingshai(int m)
//{
//  
//	for(int i=2;i<m;i++)
//	{
//		if(!a[i])
//			prime[nprime++] = i ;
//		for(	int  j=0;j < nprime &&i*prime[j]<m ;j++)
//		{
//			a[i*prime[j]]=1;
//			if(!i%prime[j])   //素数和问题 4*5 ===》 2*10
//				break;
//
//		}
//	}
//	/*
//	for(int j=0;j<nprime;j++)
//		printf("%d\t",prime[j]);*/
//}
//int  ss(int l,int r)
//{
//	xianxingshai(r);
//	int count = 0;
//
//	for(int i=0;i<nprime;i++)
//	{
//		if(prime[i] >=l)
//			return nprime-i+1;
//
//	}
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//     int l,r;
//	 cin>>l>>r;
//	cout<< ss(l,r) <<endl ;
//
//}
// 