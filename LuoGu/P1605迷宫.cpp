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


int n,m,t,dx,dy;
int bx,by,ex,ey;
int a[10][10],vis[10][10],ans ;
void dfs(int x,int y )
{ 
	if(x==ex && y==ey)
	{
		ans++;
		return ; 
	}
	else
	{
		f(i,0,3)
		{
			int dx = x+dir[i][0] ;
			int dy = y+dir[i][1] ;
			if(dx<1||dx>n||dy<1||dy>m) continue;
			if(vis[dx][dy]==0 && a[dx][dy]!=-1)
			{
				vis[x ][y ]=1;
				dfs(dx,dy);
				vis[x ][y ]=0;
			}
		}
	}
}
void work()
{
	cin>>n>>m>>t>>bx>>by>>ex>>ey;
	f(i,1,t)
	{
		cin>>dx>>dy;
		a[dx][dy]=-1;
	}
	dfs(bx,by);
	cout<<ans<<endl;
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