#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll;
int n;
ll s[200005],x;
int main()
{
	LOACL
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(s[i-1]+x<x)
			s[i]=x;
		else s[i]=s[i-1]+x;
	}
	ll ans = -0x3f3f3f3f;
	for(int i=1;i<=n;i++)
		ans =max(ans,s[i]);
	cout<<ans<<endl;
	return 0;
}