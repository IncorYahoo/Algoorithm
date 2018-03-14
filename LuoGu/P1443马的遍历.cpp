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
int dir[8][2]={{2,1},{1,2},{-1,2},{-1,-2},{-2,1},{-2,-1},{1,-2},{2,-1}};
int dx,dy;
int n,m,ex,ey;
int a[405][405];
struct node{int x,y;};
void bfs()
{
	a[ex][ey]=0;
	queue<node>q ;
	q.push((node){ex,ey});
	while(!q.empty())
	{
		node t =q.front();
		q.pop();
		f(i,0,7)
		{
			dx = t.x +dir[i][0];
			dy = t.y +dir[i][1];
			if(dx<1||dx>n||dy<1||dy>m) continue;
			if(a[dx][dy]>a[t.x][t.y]+1)
			{
				a[dx][dy]=a[t.x][t.y]+1;
				q.push((node){dx,dy});
			}
		} 
	}

}

void work()
{
    cin>>n>>m>>ex>>ey;
    f(i,1,n)f(j,1,m)a[i][j]=inf;
    bfs();
    f(i,1,n)
    {
    	f(j,1,m) 
    	if(a[i][j]!=inf) printf("%-5d", a[i][j]);
    	else  printf("%-5d", -1);;
    	 printf("\n");
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