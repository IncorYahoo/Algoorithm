#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);

const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int n,m,dp[sz],ans;
char c[sz];

int main()
{
    LOACL
    FASTIO
    cin>>n>>m>>c+1;
     dp[0]=0;
    f(i,1,n)
    {
    	if(c[i]=='a')
    	{
    		for(int j=0;j<=m;j+=2)
    		{
    			dp[j]+=1;
    			if(j&&dp[j-1]!=0)
    				dp[j]=max(dp[j],dp[j-1]+1);
    		}
    	}
    	else if(c[i]=='b')
    	{
    		 for(int j=1; j<=m; j+=2) {
                if (dp[j]!=0) dp[j]=dp[j]+1;
                if (dp[j-1]!=0) dp[j]=max(dp[j], dp[j-1]+1);
            }
    	}
    }
    f(i,0,m) ans=max(ans,dp[i]);
    cout<<ans<<endl;
    return 0;
}
