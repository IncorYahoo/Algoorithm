//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
// const int N =1e6+5;
//
// int m;int l,r,k;
// int ss(int n)
// {
// 	if(n<10) return n;
//	int x =1;
//	while(n)
//	{
//		if(n%10!=0)
//			x*=n%10;
//		n/=10;
//
//	} 
// 	return ss(x);
// }
// int a[N][10];
// int b[N];
//  
//
// int main()
// {
//	 
// 	f(i,1,N)
// 	{
// 		int  t =ss(i);
//		f(j,1,9) a[i][j]=a[i-1][j];
// 		a[i][t]++;
// 	}
//	freopen("in","r",stdin);
// 	cin>>m;
// 	while(m--)
// 	{
// 		cin>>l>>r>>k;
// 	 	cout<<a[r][k]-a[l-1][k]<<endl; 
// 	} 
//	return 0;
//
// }