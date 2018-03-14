#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
            freopen("out","w",stdout); 
typedef long long ll; 
#define f(i,j,k) for (int i=j;i<=k;i++)  
#define g(i,j,k) for (int i=j;i>=k;i--)  
int n,m,q,t;
int dp[1009][1<<9],num[1<<9],state[1<<9],w[1<<18];
void init()
{
    int k = 1<<(m-1);
    f(i,0,k-1)
    {
        int ans =0;
        int tmp =i;
        while(tmp)
        {
            tmp-=tmp&(-tmp);
            ans++;
        }
        num[i]=ans;
        if(ans<=q)
            state[++t]=i;
    }
}
 
int main()
{
    LOACL
    cin>>n>>m>>q;
    f(i,1,n)cin>>w[i];
    if(m==q)
    {
        int ans=0;
        f(i,1,n)ans+=w[i];
        cout<<ans<<endl;
        return 0;
    }
    init();
    int k = 1<<(m-2);
    dp[1][k]=w[1];
    f(i,2,n)
    {
        f(j,1,t)
        {
            int nxt = state[j]>>1;
            if(num[state[j]]<q)
            dp[i][k+nxt]=max(dp[i][k+nxt],dp[i-1][state[j]]+w[i]);
            dp[i][nxt]=max(dp[i][nxt],dp[i-1][state[j]]);
        }
    }

    int ans=0;
    f(i,1,t)
    ans=max(ans,dp[n][state[i]]);
    cout<<ans<<endl;
    return 0;
}

