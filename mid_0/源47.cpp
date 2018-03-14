///*
//作者:incor
//题目:p1468 三角形面积
//*/
//
// 
//#include <iostream>
//using namespace std;
//#include <iomanip>
//#include<cmath>
//double ss(int a,int b,int c)
//{
//	if(a>b)
//		ss(b,a,c);
//	if(b>c)
//		ss(a,c,b);
//	if(a+b <c  ){
//		  return -1 ; }
//	if(a*a+b*b==c*c)
//		return a*b/2.00;
//
//		//cout<<fixed<<setprecision(2)<< a*b/2.00<<endl;
//	else{
//		double p= (a+b+c)/2.00   ;
//		return sqrt(p*(p-a)*(p-b)*(p-c)) ;
//		//cout<<fixed<<setprecision(2)<< sqrt(p*(p-a)*(p-b)*(p-c))  <<endl; 
//	}
// 
//}
//
//int main()
//{
//   int a,b,c;
//   cin>>a>>b>>c;
//   double tmp = ss(a,b,c);
//   if(tmp!=-1)
//	  cout<<fixed<<setprecision(2)<< tmp<<endl;
//   else
//    cout<<"No answer"<<endl;
//   system("pause");
//
//}
// 