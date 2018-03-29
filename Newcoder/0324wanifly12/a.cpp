#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 

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
dl dp[100];
 
int n;
int main()
{
    LOACL
    dl r1,r2,r3,r5;
    cin>>n;
    cin>>r1>>r2>>r3>>r5;
    dp[0] = 1;
    dp[1] = 1 + r1;
    dp[2] = pow(1 + r2, 2);
    dp[3] = pow(1 + r3, 3);
    dp[5] = pow(1 + r5, 5);
    f(i,0,n)f(j,0,i)
        dp[i]=max(dp[i],dp[j]*dp[i-j]);
    cout<<dp[n]<<endl;
    return 0;
}
