//#include<iostream>
//
//#include<cstring>
//
//using namespace std;
//
//int main()
//
//{
//
//	int n,a,c;
//
//	char d;
//
//	cin>>n>>a;
//
//	for(int i=0;i<n;i++)
//
//	{
//
//		cin>>d>>c;
//
//		if(d=='+')
//			a+=c;
//		 else if(d=='-')
//			a-=c;
//		else if(d=='*')
//			a*=c;
// 
//
//		else if(d=='/')
//		{
//
//		if(c==0)
//
//		{
//
//		cout<<"Error!";return 0;
//
//		}
//
//		else
//
//		{
//
//		a/=c;
//
//		}
//
//		}
//
//		else if(d=='%')
//
//		{
//
//		if(c==0)
//
//		{
//
//		cout<<"Error!";
//
//		return 0;
//
//		}
//
//		else
//
//		{
//
//		a%=c;
//
//		}
//
//		}
//
//	}
//
//	cout<<a;
//
//}