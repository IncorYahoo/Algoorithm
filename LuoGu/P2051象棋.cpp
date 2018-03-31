#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)101 + 5;
const int   mod = 9999973;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 

int n,m;
ll dp[sz][sz][sz];
inline int c( int num ) 
{ // 相当于C(num,2)
    return num*(num-1)/2;
}

int main()
{
    LOACL
    FASTIO
    
    cin>>n>>m;
    dp[0][0][0]=1;
     REP(i,0,n-1)REP(j,0,m)REP(k,0,m-j) if(dp[i][j][k])
    {
        dp[i+1][j][k] =(dp[i+1][j][k]+dp[i][j][k])%mod;
        if(m-j-k>=1)dp[i+1][j+1][k] = (dp[i+1][j+1][k]+dp[i][j][k]*(m-j-k))%mod;
        if(j>=1) dp[i+1][j-1][k+1] = (dp[i+1][j-1][k+1]+dp[i][j][k]*j)%mod;
        if(m-j-k>=2)dp[i+1][j+2][k] = (dp[i+1][j+2][k]+dp[i][j][k]*c(m-j-k))%mod;
        if(m-j-k>=1&&j>=1) dp[i+1][j][k+1] = (dp[i+1][j][k+1]+dp[i][j][k]*(m-j-k)*j)%mod;
        if(j>=2)dp[i+1][j-2][k+2]=(dp[i+1][j-2][k+2]+dp[i][j][k]*c(j))%mod; 
    } 
    ll ans = 0;
    REP(i,0,m) REP(j,0,m-i)ans= (ans+dp[n][i][j])%mod;
    

    cout<<ans<<endl;
    
    return 0;
}