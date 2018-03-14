#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e2+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define inf 214748364
int a[maxn],sum[maxn];
int dp[maxn][maxn]; 
int n;
void slove()
{

 	f(len,1,n-1)
 	{ 
 		for(int i=1,j=len+1;j<=n;j++,i++)
 		{
 			dp[i][j]=inf;
			f(s,i,j-1)
			 dp[i][j]=min(dp[i][j],dp[i][s]+dp[s + 1][j] + sum[j] - sum[i - 1]);

 		}
 	}
	 
 	cout<<dp[1][n]<<endl;		 
}
 

int main()
{
     
    freopen("in","r",stdin);
  
    cin>>n;
    f(i,1,n)
    {
    	cin>>a[i];
    	sum[i]=sum[i-1]+a[i];
    }
   	slove();
 

    return 0; 
}

