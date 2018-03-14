//#include<iostream>
//#include<algorithm> 
//using namespace std;
//#define INF 0x7fffffff 
//const int N =1000001; 
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//int a[N],b[N],c[N];
//int n;
//ll count =0 ;
//bool cmp(int l,int r){
//	return l<r;
//}
//int main()
//{
//
//	cin>>n;
//	f(i,1,n)
//		cin>>a[i];
//
//	int l  =a[1] , r =INF;
//	f(i,1,n)
//	{
//		b[a[i]]++;
//		l=max(l,a[i]);
//		r=min(r,a[i]);
//	}
//	int k =l/r;int count=0;
//	if(k>1000)
//	{ 
//		int t,y;
//		f(i,1,n)
//			f(j,i+1,n)
//			if(a[i]>a[j])
//				t=a[j],y=a[i];
//			else t=a[i],y=a[j];
//				if(y%t==0)b[y/t]++,count=max(count,b[y/t]);
//	}
//	else
//	{
//		f(i,1,n)
//			f(j,2,k)
//			 if(b[a[i]*j])c[j]++;
//		f(j,2,k) count=max(count,c[j]);
//	}
//
//
//
//	cout<<count<<endl ;
//
//
//	return 0;
//}