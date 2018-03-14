///*
//作者:incor
//题目:p3137 栈练习1
//*/
//
// 
//#include <iostream>
//using namespace std;
//#include<stack>
//
//int main()
//{
//   stack<int > s;
//   int n;
//   cin>>n;
//   int  a;
//
//   while(n--)
//   {
//	   cin>>a;
//	   switch(a)
//	   {
//	   case 1 :
//		   cin>>a,s.push(a);
//		   break;
//	   case 2:
//		   {
//			   if(!s.empty()){
//				   s.pop();
//			   }
//			   else 
//			   {
//				    cout<<"impossible!"<<endl;return 0;
//			   }
//		   }
//		   break;
//		    case 3:
//		   {
//			    cout<<s.top();
//		   }
//		   break;
//	   }
//   }
//	 
//   return 0;
//}
// 