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

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int dp[70];
int ff(int n)
{
	if(n<0) return 0;
	if(n==1) return 1 ;
	if(n==2) return 0;
	 
	return  n*dp[n-1];

}
int main()
{
    LOACL
    dp[0]=dp[1]=0;
    dp[2]= 1;
    REP(i,3,66)
    {
    	dp[i]=(i-1)*(dp[i-1]+dp[i-2]);
    }
   //  REP(i,2,66) DBG(dp[i]);
    int n;
    while(cin>>n)
    	cout<<ff(n)<<endl;

    return 0;
} 