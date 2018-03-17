#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
int n,a[sz],dp[2][sz],ans;
int main()
{
	LOACL
	cin>>n;
	f(i,1,n)cin>>a[i];

	f(i,1,n)f(j,0,i-1)if(a[i]>a[j])dp[0][i]=max(dp[0][i],dp[0][j]+1); 
	g(i,n,1)g(j,n+1,i+1) if(a[i]>a[j]) dp[1][i]=max(dp[1][i],dp[1][j]+1);
	f(i,1,n) ans=max(ans,dp[0][i]+dp[1][i]-1);
	cout<<n-ans<<endl;
	return 0;
}

