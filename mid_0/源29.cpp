//#include<iostream>
//using namespace std;
//对于100%的数据，有1 <= n <= 1000 
//int main()
//{
//	// 9 189 2899 38889 90000*5 90000*5
//	// 1  2   3
//	int n;
//	cin>>n;
//
//	if(n<9)
//		cout<<n;
//	else if(n<189)
//	{
//		n-=9;
//		int s = n/2+10;
//
//		if(n%2==0)
//			cout<<(s+1)%10<<endl;
//		else
//			cout<<((s+1)%10)<<endl;
//	}
//	else
//	{
//		n-=189;
//		int s =n/3 +99;
//		if(n%3==0)
//			cout<<(s+1)/100<<endl;
//		else if(n%3==1)
//			cout<<(s+1)%100%10<<endl;
//		else if(n%3==1)
//			cout<<(s+1)%1<<endl;
//	}
//	system("pause");
//	return 0;
//}