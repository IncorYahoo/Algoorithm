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
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 
int n;
int co=0;
int a[100] ;
bool vis[3][100];
void dfs(int step)
{
	int i,j,flag;
	if(step==n+1)
	{
		co++;
		if(co<=3){

			f(i,1,n) cout<<a[i]<<" ";
			cout<<endl;
		}
		return ; 
	}
	f(i,1,n)
	{
		if(!vis[0][i] && !vis[1][i+step]&& !vis[2][step+n-i])
			 vis[0][i]=vis[1][i+step]=vis[2][step-i+n]=1;
		a[step]=i;
		dfs(step+1);
		vis[0][i]=vis[1][i+step]=vis[2][step-i+n]=0;	
	}
}
void work()
{
    cin>>n;
    dfs(1);
    cout<<co<<endl;
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
  
    return 0; 
}