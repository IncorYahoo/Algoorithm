///*
//作者:incor
//题目:p3050 家庭问题
//*/
//
// 
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n,i,tmp;
//	long long sum=0;
//	int max,min;
//	 cin>>n;
//	 n-=1;
//	 cin>>tmp;
//	 max =tmp;
//	 min=tmp;
//	 sum+=tmp;
//	 for(int i=1;i<=n;++i)
//	 {
//		 cin>>tmp;
//		 max = tmp>max ?tmp:max;
//		 min = tmp<min?tmp:min;
//		 sum+=tmp;
//	 }
//	 n+=1;
//	 long long avg = sum/n+(sum%n>n/2?1:0);
//
//	 cout<<max<<endl;
//	cout<<min<<endl;
//	cout<<avg<<endl;
//	system("pause");
//
//
//}
// 