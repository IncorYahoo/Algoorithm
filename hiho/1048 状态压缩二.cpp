#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i) 
typedef long long ll; 
const int mod = 1000000007 ;
int n,m;
int dp[1009][1025];
int t,mx,ans;
int main()
{
	LOACL
	cin>>n>>m;
	t =(1<<m)-1;
	mx=(1<<(m<<1)-1);
	dp[1][0]=1; 
	f(i,1,n)
	{
		 f(k,0,m-1) f(j,0,mx)
	 	{
	 		if(j&(i<<k)==0)
	 		 	 dp[i][j | (1 << k) | (1 << (k + m))] = (dp[i][j | (1 << k) | (1 << (k + m))] + dp[i][j]) % mod;//竖放一定可以  
	 		 
  			if(k + 1 < m && (j & (1 << (k + 1))) == 0) 
  				
                            dp[i][j | (1 << k) | (1 << (k + 1))] = (dp[i][j | (1 << k) | (1 << (k + 1))] + dp[i][j]) % mod;  
	 	}	
	 	f(j,0,mx)
	 	 if(j&(t)==t) dp[i+1][j>>m]=dp[i][j];
	 	 
	}
	



	 return 0;
}
