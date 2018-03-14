#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

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
int n,m,x[sz],y[sz];
char a[1005][1005];
int scc[1005][1005];
bool vis [1005][1005];
struct node{
	int x,y;
}; 
void bfs(int x,int y )
{
 
 	int  ans=1;
	queue<node>q;
	stack<node> s;
	q.push((node){x,y});
	s.push((node){x,y});
	vis[x][y]=1;
  	while(!q.empty())
	{
		node t=q.front();
		q.pop();
		f(i,0,3)
		{
			int dx= t.x+dir[i][0];
			int dy= t.y+dir[i][1];

			if(dx<1||dx>n||dy<1||dy>n)continue;
		    if(vis[dx][dy])continue;
			if(a[x][y]==a[dx][dy]) continue;
		
			vis[dx][dy] =1;
			s.push((node){dx,dy});
			q.push((node){dx,dy});
			++ans;
		} 
	}
	while(!s.empty())
	{
		node t =s.top();
		s.pop();
		scc[t.x][t.y]=ans;
	}
 
}
 
void work()
{
	 
    cin>>n>>m;
    f(i,1,n) f(j,1,n) cin>>a[i][j];
 //   f(i,1,n) f(j,1,n) cout<<a[i][j];
    f(i,1,m) cin>>x[i]>>y[i];  
    f(i,1,n)
    	f(j,1,n)
    		if(!vis[i][j])
    			bfs(i,j);
     f(i,1,n)
    {
    	f(j,1,n)		
   		cout<<scc[i][j]<<" ";
   	cout<<endl;
   }
  //   f(i,1,m) 
  //   if(scc[x[i]][y[i]] ) cout<<scc[x[i]][y[i]]<<endl;
  //	else cout<<0<<endl;
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