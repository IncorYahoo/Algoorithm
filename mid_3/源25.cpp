///*input
//5
//1 2 3 4 1
//1 3
//
//*/
//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//#include <map>
//#include <set>
//#include <stack>
//#include <queue>
//#include <deque>
//#include <cassert>
//#include <list>
//using namespace std;
//#define ll long long int
//ll arr[111111];
//ll s[111111];
//ll n;
//ll calc(ll l,ll r)
//{
//	l++,r++;
//	if(l<=r)
//		return s[r]-s[l-1];
//	return s[n]-s[l-1]+s[r];
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>n;
//	for(ll i=0;i<n;i++)
//		cin>>arr[i];
//	for(ll i=1;i<=n;i++)
//		s[i]=s[i-1]+arr[i-1];
//	ll l,r;
//	cin>>l>>r;
//	r--;
//	l--;
//	r--;
//	ll ans=1,cnt=0;
//	for(ll i=1;i<=n;i++)
//	{
//		ll tot=calc(l,r);
//		//cout<<l<<" "<<r<<" "<<tot<<endl;
//		if(tot>cnt)
//			cnt=tot,ans=i;
//		l=(l-1+n)%n;
//		r=(r-1+n)%n;
//	}
//	cout<<ans<<endl;
//}