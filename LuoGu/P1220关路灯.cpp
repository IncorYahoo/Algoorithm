#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)50 + 5;
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
int n,c;
int loc[sz],p[sz];
int dp[sz][sz][2];
int calc(int i,int j ,int l,int r)
{
	return (loc[j]-loc[i])*(p[l]+p[n]-p[r-l]);
}

int main()
{
    LOACL
    FASTIO
    cin>>n>>c;
    CLR(p,0);
    CLR(dp,0x3f);
    REP(i,1,n)
    {
    	cin>>loc[i]>>p[i];
    	p[i]+=p[i-1];
    }
    dp[c][c][0]=dp[c][c][1]=0;
    REP(j,c,n) DOWN(i,j-1,1)
    {
    	dp[i][j][0]=min(dp[i+1][j][0]+calc(i,i+1,i,j+1),dp[i+1][j][1]+calc(i,j,i,j+1));
    	dp[i][j][1]=min(dp[i][j-1][0]+calc(i,j,i-1,j),dp[i][j-1][1]+calc(j-1,j,i-1,j));
    }
    cout<<min(dp[1][n][0],dp[1][n][1])<<endl;
    CLOCK
    return 0;
}