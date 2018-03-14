#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =85; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int n,m;
 ll a[maxn] ,dp[maxn][maxn];
 ll ans;
 void slove()
 {
 	memset(dp,0,sizeof(dp));
 	f(i,1,m)
 		dp[i][i]=a[i]*(1<<m);
 	g(i,m,1)
 		f(j,i+1,m)
 		{
 			int s = m-(j-i);
 			ll ss = 1<<s;
 			dp[i][j]=max(dp[i+1][j]+a[i]*ss,dp[i][j-1]+a[j]*ss);
 		}
 	ans+=dp[1][m];	
 }
int main()
{
     
    freopen("in","r",stdin);
    cin>>n>>m;
  	while(n--)
  	{
  		f(i,1,m)cin>>a[i];
  		slove();
  	}
  	cout<<ans<<endl;
    cout<<"hello"<<endl;

    return 0; 
}

