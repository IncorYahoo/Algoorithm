#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int n ,money;
 int cost[maxn],value[maxn];
 int dp[maxn];
int main()
{
     
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cin>>n>>money;
    f(i,1,n)
    	cin>>cost[i]>>value[i];
    f(i,1,n)
    	g(j,money,cost[i])
    	 	dp[j] =max(dp[j],dp [j-cost[i]]+value[i]); 
 
    cout<<dp[money]<<endl;
    return 0; 
}

