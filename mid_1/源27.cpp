//#include<iostream>
//using namespace std;
//#define FO(i,L,R) for(int i=L;i<=R;++i)
//#define FR(i,L,R) for(int i=L;i>=R;--i)
//
//const int N=1005;
//int a[N],b[N];
//int n;
//int main()
//{
//	cin>>n;
//	FO(i,1,n)
//		cin>>a[i];
//	b[1]=1;
//	FO(i,1,n)
//		FR(j,i-1,0)
//			if(a[i]>=a[j])
//				b[i]=max(b[i],b[j]+1);
//	int max_num=0;
//	FO(i,1,n)
//		max_num=max(max_num,b[i]);
//	cout<<max_num<<endl;
//}
//	