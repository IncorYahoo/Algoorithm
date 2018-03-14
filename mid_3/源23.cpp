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
ll calc( int l , int r)
{
	l++,r++;

	if(l<=r)return sum[r]-sum[l-1];
	else return sum[n]-sum[l-1]+sum[r];
}
int main()
{
	
	 cin>>n;
	 f(i,1,n)
	{
		 cin>>a[i];
		 a[i+n]=a[i];
	 }
	 f(i,1,n)
	 {
		 sum[i]=sum[i-1]+a[i];
	 } 
	int s,f, cnt=0;
	cin>>s>>f;
    s--;
	f--;
	f--;
	ll ans = -2147483647 ;
 
	f(i,1,n)
	{
		ll tot = calc(s,f);
		if(tot>ans)
			ans=tot,cnt=i;
		f=(f-1+n)%n;
		s=(s-1+n)%n;
	} 
	cout<<cnt<<endl;
	 
 
	return 0;

}
