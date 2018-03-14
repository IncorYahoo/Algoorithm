#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 505 ;
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
ll g[sz][sz];
 
int T,n,m;
struct node
{
    int x, y;
    ll cost;
    node(int _x,int _y,ll _c):x(_x),y(_y),cost(_c){}
    node(){}
    bool operator<(const node&b)const
    {
        return cost > b.cost;
    }
};
 
bool vis[sz][sz]; 
int dir[4][2] = { -1,0,1,0,0,-1,0,1 };
 
ll bfs()
{
	priority_queue <node> q ;
 	CLR(vis,0); 
 	f(i,1,m-1) 
 	if(g[1][i]!=-1)
 		q.push(node(1,i,g[1][i]));
 	f(i,1,n)
 		if(g[i][m]!=-1)
 			q.push(node(i,m,g[i][m])); 
    while(!q.empty())
    {
    	 node x = q.top();q.pop();
    	 if(vis[x.x][x.y])continue;
    	 vis[x.x][x.y] =1;
    	 if(x.x==n || x.y ==1) return x.cost;
    	 f(i,0,3)
    	 {
    	 	int dx = x.x +dir[i][0];
    	 	int dy = x.y+ dir[i][1];
    	 	if(dx<1||dx>n||dy<1||dy>m) continue;
    	 	if(g[dx][dy]==-1)continue;
    	 	if(vis[dx][dy])continue;
    	 	q.push(node(dx,dy,x.cost+g[dx][dy]));
    	 }
    }
    return -1;
     
}


void work()
{
    cin>>T>>n>>m;
    while(T--)
    {
    	f(i,1,n)f(j,1,m)cin>>g[i][j];
    	f(i,1,n)f(j,1,m) 
    	if(g[i][j] ==-1)   g[i][j]=0;
    	else if( g[i][j] ==0)   g[i][j]=-1; 
    	cout<<bfs()<<endl;
    }

    
    
}


int main()
{
    FAST_IO ;
    work();
    return 0; 
}