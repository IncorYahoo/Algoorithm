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
typedef __int128  li ; 
int n,m,a[105];
li dp[105][105],t[105],ans;


int main()
{
    LOACL
    FASTIO
    cin>>n>>m;
    t[0]=1;
    REP(i,1,m)t[i]=t[i-1]*2;
    REP(i,1,n)
    {
    	REP(j,1,m)cin>>a[j];
    	CLR(dp,0);
 		
    	REP(j,1,m) DOWN(k,m,j)dp[j][k]=max(dp[j-1][k]+t[m-k+j-1]*a[j-1],dp[j][k+1]+t[m-k+j-1]*a[k+1]);
    	li MaxN=-1;
        REP(j,1,m)MaxN=max(MaxN,dp[j][j]+t[m]*a[j]); 
        ans+=MaxN; 
    }
	if(ans==0)cout<<0; 
	else cout<<ans; 
 
 
    return 0;
}