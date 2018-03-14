#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
ll v[10005],w[10005],n,m,s[100005];
   
int main()
{
	LOACL
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>v[i]>>w[i];
	for(int i=1;i<=m;i++)
		for(int j=v[i];j<=n;j++)
	//	for(int j = n;j>=v[i];j--)
			s[j]=max(s[j],s[j-v[i]]+w[i]);
	cout<<s[n];
	return 0;
}