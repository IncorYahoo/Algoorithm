#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int n,x;
string s;
ll dp [105][105][105];
ll powe[105];

void work()
{
    cin>>n>>x>>s;
    powe[1]=2;
    powe[0]=2;
	f(i,2,104)powe[i]=powe[i-1]*powe[i-2]%mod;
	 
	f(i,0, n-1) dp[s[i]-'0'][i][i]=1;
	f(i,2,x)f(j,0,n-1)f(k,j,n-1)
	{
		if(k==n-1)
			dp[i][j][k]=(dp[i][j][k]+dp[i-1][j][k]*powe[i-2]%mod)%mod;
		else
			dp[i][j][k]=(dp[i][j][k]+dp[i-1][j][k] )%mod;
	   if (j == 0)
            dp[i][j][k] = (dp[i][j][k] + dp[i - 2][j][k]*powe[i - 1] % mod) % mod;
       else
            dp[i][j][k] = (dp[i][j][k] + dp[i - 2][j][k]) % mod;
        f(l,j,k-1)
         	 dp[i][j][k] = (dp[i][j][k] +dp[i-1][j][l]*dp[i-2][l+1][k]%mod)%mod ;
	}
	cout << dp[x][0][n - 1] << endl;

}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}