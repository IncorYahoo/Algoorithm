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
int n,m,k;
string s[505];
int dp[505][505],sum;
 
void work()
{
	 cin >> n >> m >> k;
	 f(i,0,n-1)cin>>s[i]; 
	 f(i,0,n)f(j,0,k)dp[i][j]=inf;
     dp[0][0] = 0;
     f(i,0,n-1)
     {
     	int die =0 ;
     	vector <int> res(m + 1, inf);
     	f(l,0,m-1)
     	{
     		 int cur = die;
     		 g(r,m-1,l)
     		 {
     		 	res[cur] = min(res[cur], r - l + 1);
                cur += (s[i][r] == '1');
     		 }
     		 die += (s[i][l] == '1');
     	}
     	res[die] = 0;
     	f(j,0,k)
     	{
     		f(x,0,min(m,k-j))
     		{
     			  dp[i + 1][j + x] = min(dp[i + 1][j + x], dp[i][j] + res[x]);
     		}
     	}
     }
     int ans = inf;
     f(i,0,k) ans = min(ans, dp[n][i]);
     cout << ans << endl;
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