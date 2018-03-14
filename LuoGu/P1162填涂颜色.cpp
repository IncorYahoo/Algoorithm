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
int n;
int a [35][35];
int vis [35][35];
typedef struct node{int x,y;} e;
void bfs(int x ,int y)
{
	if(a[x][y]==1) return ;
	vis[x][y]=0;
	queue<e> q ;
	q.push((e){x,y});
	while(!q.empty())
	{
		e t = q.front();
		q.pop();
		f(i,0,3)
		{
			int dx = t.x+dir[i][0];
			int dy=  t.y+dir[i][1];
			if(dx<1||dx>n||dy<1||dy>n) continue;
			if(vis[dx][dy]==1)continue;

			if(vis[dx][dy]==2)
			{
				vis[dx][dy]=0;
				q.push((e){dx,dy});
			}
		} 
	}
}
void work()
{
    cin>>n;
    f(i,1,n)f(j,1,n)vis[i][j]=2;
    f(i,1,n)f(j,1,n)
    {
    	cin>>a[i][j];
    	if(a[i][j])vis[i][j]=1;
    }
    
    f(i,1,n)
    bfs(1,i),bfs(n,i),bfs(i,1),bfs(i,n);

     
    f(i,1,n)
    {
    	f(j,1,n)
    		if(vis[i][j]==2)cout<<2<<" ";
    		else cout<<a[i][j]<<" ";
    	cout<<endl;
    }
   
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