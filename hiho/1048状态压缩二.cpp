 #include<bits/stdc++.h>
 using namespace std;
 #define LOACL  freopen("in","r",stdin);\
 			freopen("out","w",stdout); 
 typedef long long ll; 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
const int mod = 1000000007;
const int MOD = 1000000007;
int n,m,t,mx,full;
ll dp[1009][(1<<11)-1];
int main()
{
 	LOACL
 	cin>>n>>m;
 	dp[1][0]=1;	
 	t=(1<<m)-1;
 	full=t;
 	mx = (1<<(m<<1))-1;
	f(i,1,n)
 	{
 		 
 		f(k,0,m-1)
 			f(j,0,mx)
 			 if((j&(1<<k))==0)
 			  { 
                  dp[i][ j|(1<<k)|(1<<(k+m)) ] = (dp[i][j|(1<<k)|(1<<(k+m))]+dp[i][j])%mod;   
                  if(k<m-1 && (j&(1<<(k+1)))==0)
                      dp[i][j|(1<<k)|(1<<k+1)] = (dp[i][j|(1<<k)|(1<<k+1)] +dp[i][j])%mod;
               }  
 		 f(k,0,mx) 
 		 	if(k&t==t)
 				dp[i+1][k>>m]=dp[i][k]; 
 	} 
 
 	cout<<dp[n][t];



 	return 0;
 }
