//#include<iostream>
//using namespace std;
//const int N = 10005;
//int a[N],f[N]  ,p[N] ;
//int n;
//
//
//int main()
//{
//	for(n=1;cin>>a[n];n++);
//	n--;
//	for(int i=1;i<=n;i++)
//	{
//		f[1]=1;p[1]=1;
//
//		for(int j=i-1;j>1;j--)
//		{
//			if(a[j]>a[i])
//				f[i]=max(f[i],f[j]+1);
//			else 
//				p[i]=max(p[i],p[j]+1);
//		}
//	}
//	int num_1=0,num_2=0;
//	for(int i=1;i<=n;++i)
//	{
//		num_1=max(num_1,f[i]);
//		num_2=max(num_2,p[i]);
//	}
//	cout<<num_1<<" "<<num_2<<endl;
//
//	return 0;
//}
