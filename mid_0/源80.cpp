//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//#define ll long long
//int t,n,m,p,k;
//const int N =1e5+5;
//int a[N];
//long long ans;
//
//void work(int k,int w)
//{
//	for (int i=k;i<=n;i++) if (i>1&&m-(i-k)>=0) ans=min(ans,(ll)w+a[i]-a[k]+((ll)a[i]-a[i-1])*(m-(i-k)));
//    for (int i=k-1;i;i--) if (i<n&&m-(k-i)>=0) ans=min(ans,(ll)w+a[k]-a[i]+((ll)(a[i+1]-a[i]))*(m-(k-i)));
//}
//
//int main()
//{
//	cin>>t;
//	while(t--)
//	{
//		ans = 1e18;
//		cin>>n>>m>>p;
//		for(int i=1;i<=n;i++)
//			cin>>a[i];
//		for(k=0;a[k]<p&&k<=n;k++);
//		m--;
//		if (k<=n)  work(k,a[k]-p);
//		if(k>1)    work(k-1,p-a[k-1]);
//	}
//
//
//
//
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
