#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define INF 0x7f
const int maxn =1e5+6; 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
ll a[2*maxn],sum[maxn<<1]; 
int n;
int main()
{
	
	 cin>>n;
	 f(i,1,n)
	{
		 cin>>a[i];
		 a[i+n]=a[i];
	 }
	 f(i,1,2*n)
	 {
		 sum[i]=sum[i-1]+a[i];
	 }
	  f(i,n,2*n)
	 {
		 sum[i]=sum[i-1]+a[i-n];
	 }
	int s,f,len,cnt;
	cin>>s>>f;
 	f--;
	ll ans = -2147483647 ;
 
	f(i,1,n)
	{
		if(ans <sum[i+f]-sum[i+s] )
		{
			ans= sum[i+f]-sum[i+s]   ;
			cnt=i;
		} 
	} 
	cout<<cnt<<endl;
	 

	return 0;

}
