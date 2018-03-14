//#include<iostream>
//#include<cmath>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 105;
//int a[N];
//int n;
//int main()
//{
//	 cin>>n;
//	 if(n==1) {
//		 cout<<0<<endl;
//		 return 0;
//	 }
//	 f(i,1,n)cin>>a[i];
//	 int ans1 = a[1];
//	 int ans2 = a[1];
//	 int t1=1,t2=1;
//	 f(i,1,n){
//		ans1 <a[i]?ans1=a[i],t1=i:1;
//		ans2 >a[i]?ans2=a[i],t2=i:1;
//	 }
//	 if(ans1==ans2) {
//		  cout<<0<<endl;
//		 return 0;
//	 }
//	 else {
//		 cout<<max(abs(n-t1),max(abs(n-t2),max(abs(1-t1),abs(1-t2))))<<endl;
//	 }
//
//	 return 0;
//
//
//
//}