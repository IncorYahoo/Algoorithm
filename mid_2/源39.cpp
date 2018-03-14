//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//typedef long long ll;
//#define INF 0x3f3f3f3f3f
// 
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 100005 ;
//int a[N],sum[N];
//ll pre[N];
//int n;
//int func(int i,int j )
//{
//	int sum=0;
//	f(k,min(i,j)+1,max(i,j))
//		sum+=a[k];
//	return sum;
//}
//int main()
//{
//	cin>>n;
//	
//	f(i,1,n)cin>>a[i],sum[i]=sum[i-1]+a[i];
//	//memset(pre,INF,sizeof(pre));
//	//f(i,1,n)
//	//	f(j,1,n-i)
//	//	{
//	//		pre[j] =min(pre[j], (long long)(sum[i+j]-sum[i])*(sum[i+j]-sum[i])+i*i);
//	//	}
//	//long long ans = pre[1];
//	//f(i,2,n-1)
//	//	ans=min(pre[i],ans);
//	//cout<<ans<<endl;
//	// 
//	memset(pre,INF,sizeof(pre));
//	f(i,1,n-1)pre[i]=(a[i]+a[i+1])*(a[i]+a[i+1]);
//	long long ans = pre[1];
//	f(i,1,n-1)ans=min(pre[i],ans);
//	cout<<ans+1<<endl;
//	return 0;
//}