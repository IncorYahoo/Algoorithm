//#include<iostream>
//#include<stack>
//#include<string>
//#include<string.h>
//#define  f(i,L,R) for(int i=L;i<=R;++i)
//#define  g(i,L,R) for(int i=L;i>=R;--i)
//#define lowbit(x) (x&-x)
//using namespace std;
// 
//stack<char>s;
//char a[105],b[105]={0};
// 
//int main()
//{
//   cin>>a;
//   int n=strlen(a);
//   f(i,0,n-1){
//	   if(!s.empty()){
//			if(s.top() == 'o'&& a[i]=='o')
//			{
//					s.pop(),a[i]='O';
//					i--;continue;
//			}
//			else if(s.top() == 'O'&& a[i]=='O')
//				s.pop() ;
//			else   s.push(a[i]);
//
//	   }
//	   else  s.push(a[i]);
//   }
//   int c=0;
//   while(!s.empty())
//   {
//	   b[c++]=s.top();
//	   s.pop();
//   }
//   g(i,c-1,0) 
//	cout<<b[i];
//
//	return 0;
//}