///*
//作者:incor
//题目:p1462 素数和
//*/
// 
//#include <iostream>
//using namespace std;
//  
//int k[100000]={1,1};
//int nprime=0;
//
//int prime[10000];
//
//
//
//int ss(int a,int b)
//{
//	if(a>b) return ss(b,a);
//	if(a==b)return 0;
//	for(int i=2;i<b;i++)
//	{
//		if(!k[i])
//			prime[nprime++]=i;
//		for(int j=0; j< nprime &&  i*prime[j]< b ;j++)
//		{
//			k[i*prime[j]] =1;
//			if(!i%prime[j])break;
//		}
//	}
//	//for(int j=0;j<nprime;j++)
//	//{
//	//	cout<<prime[j]<<" ";
//	//}
//	int sum=0;
//	for(int j=0;j<nprime;j++)
//	{
//		if(prime[j] >= a) sum+=prime[j];
//	}
//	return sum;
//
//}
//int main()
//{
//	int a, b; 
//    cin>>a>>b;
//	cout<<ss(a,b)<<endl;;
//	system("pause");
//
//}
// 