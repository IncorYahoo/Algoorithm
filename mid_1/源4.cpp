//#include<iostream>
//using namespace std;
//int a[101];int sum;int n;
//int ans;
//
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++)
//		cin>>a[i],sum+=a[i];
//	sum/=n;
//
//	for(int i=1;i*2<=n;i++)
//	{
//		if(a[i]!=sum)ans++;
//		a[i+1] += a[i]-sum;a[i]=sum;
//
//		if(a[n-i+1]!=sum)ans++;
//		a[n-i] += a[n-i+1]-sum;a[n-i+1]=sum;
//	}
//	cout<<ans<<endl;
//}