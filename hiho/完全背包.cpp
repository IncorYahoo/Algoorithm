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
int n,money;
int value[sz],cost[sz],dp[505][100005];  
int pp[sz];
void work()
{
	cin>>n>>money ;
	f(i,1,n)	cin>>cost[i]>>value[i];
	f(i,1,n) f(j,cost[i],money)
		pp[j]=max(pp[j],pp[j-cost[i]]+value[i]);
	cout<<pp[money]<<endl;
}
void work2()
{
	int ans = 0;
	cin>>n>>money ;
	f(i,1,n)	cin>>cost[i]>>value[i];
	f(i,1,n)f(j,0,money)f(k,0,j/cost[i])
	{
		pp[j]=max(pp[j],pp[j-cost[i]*k]+value[i]*k);
		ans=max(ans,pp[j]);
	}
	cout<<ans<<endl;
}

void work1()
{
	cin>>n>>money ;
	f(i,1,n)	cin>>cost[i]>>value[i];
	
	f(i,1,n)
	{
		f(j,1,money)
		{
			int maxx = dp[i-1][j];
			f(k,1,j/cost[i])
			{
				maxx =max(maxx,max(dp[i][j],dp[i][j-cost[i]*k]+value[i]*k));
			}
			dp[i][j]=maxx;
		}
	}
	cout<<dp[n][money];
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