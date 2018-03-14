//#include<iostream>
//using namespace std;
//int a[14] = {31,31 ,30 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31  };
//int b[13]={0};
//bool Isyear(int i)
//{
//	if(i%10 != 0 && i%4==0)
//		return true;
//	else if (i%100 ==0)
//		return true;
//	else 
//		return false;
//
//}
//int calc(int n)
//{
//	int i=0;
//	int sum=0;
//
//	for(i=1900;i<=1900+n;i++)
//	{
//		if( Isyear(i) )
//			sum+=366;
//		else sum+=365;
//	}
//	return sum;
//}
//void ss (int n)
//{
//
//	for(int i =1900 ;i< 1900+n;i++)
//	{
//		if( Isyear(i))
//			a[2]=29;
//		else 
//			a[2] =28;
//		int s =0 ;
//		bool flag =true;
//
//		for(int j=1;j<=12;j++)
//		{
//			if(flag )
//			{
//				
//				s+=13;flag=false;
//			}
//			else {
//				if(j==1)
//					s+=a[12];
//				else 
//					s+=a[j-1];
//			}
//			b[s%7]++;
//		}
//
//	}
//	/*int s = calc(n);*/
//	/*int t = s/7;
//	int k =s - t*7;
//	for(int i = 0 ;i<7;i++)
//	{
//		if(k-- >0)
//			cout<<t+1<<" ";
//		else  
//			cout<<t<<" ";
//	}*/
//	for(int i=0;i<12;i++)
//	{
//			cout<<b[i]<<" ";
//	}
//	cout<<endl;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	ss(n);
//
//
//
//	system("pause");
//	return 0;
//}