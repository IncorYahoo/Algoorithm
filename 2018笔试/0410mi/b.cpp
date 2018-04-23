#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
  
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)

typedef long long ll; 
typedef double dl; 
ll dp[55];
int n;
int main()
{
    LOACL
    dp[0]=dp[1]=1;
    REP(i,2,50)
    {
    	dp[i]+=dp[i-1];
    	dp[i]+=dp[i-2];
    }
    while(cin>>n)
    {
    	cout<<dp[n]<<endl;
    }


    return 0;
}