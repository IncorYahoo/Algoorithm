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
char a [105][105];
int  vis [105][105];
char b[]="yizhong";
int len = sz(b);
int s ;
void rangecolor(int x,int y,int k)
{
	int dx =x  ;
	int dy =y ;
 
	f(i,1,len)
	{

  		dx =dx - dir[k][0];
	    dy =dy - dir[k][1];
	    vis[dx][dy]=1;
	} 
}
void dfs(int x,int y,int k,int pos)
{
    if(pos<0||pos>n ) return;
	if(pos==len)
	{ 
	 	rangecolor(x,y,k);
		return ;
	}
	if(a[x][y]==b[pos])
	{
		int dx =x + dir[k][0];
		int dy =y + dir[k][1];
		if(dx<0||dx>n+1||dy<0||dy>n+1) return ;
		dfs(dx,dy,k,pos+1); 
	}



}
void work()
{ 
    cin>>n;
    f(i,1,n)f(j,1,n)cin>>a[i][j];
    f(i,1,n)f(j,1,n)
    {
    	if(a[i][j]=='y')
    	{
    		f(k,0,7)
    			dfs(i,j,k,0);
    	}
    }
 //   f(i,1,n)f(j,1,n) cout<<vis[i][j];
  
      f(i,1,n)
	{
		 f(j,1,n)
	     {
	     	if(vis[i][j])		cout<<a[i][j];
	     	else cout<<"*";
	     }
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