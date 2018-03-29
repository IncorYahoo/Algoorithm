#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
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
int n,m,k;
int a[805][805];
int dp[805][805][20][2];
int main()
{
    LOACL
    FASTIO
    cin>>n>>m>>k; k++;
    REP(i,1,n)REP(j,1,m) 
    { 
    	cin>>a[i][j]; 
    	a[i][j]%=k;
    	dp[i][j][a[i][j]%k][0]=1; 
    }
    int ans =0 ;
    REP(i,1,n)REP(j,1,m)REP(h,0,k)
    {

		dp[i][j][h][0]=(dp[i][j][h][0]+dp[i-1][j][(h-a[i][j]+k)%k][1])%mod;
		dp[i][j][h][0]=(dp[i][j][h][0]+dp[i][j-1][(h-a[i][j]+k)%k][1])%mod;
		dp[i][j][h][1]=(dp[i][j][h][1]+dp[i-1][j][(h+a[i][j])%k][0])%mod;
		dp[i][j][h][1]=(dp[i][j][h][1]+dp[i][j-1][(h+a[i][j])%k][0])%mod; 
    }
    REP(i,1,n)REP(j,1,m) ans = (ans+dp[i][j][0][1])%mod;
   	cout<<ans<<endl;

    CLOCK
    return 0;
}
