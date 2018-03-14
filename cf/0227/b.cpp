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

int n,m,s,t;
struct E{
	int v,  nxt;
}e[sz<<2];
int head[sz],tot;
void init()
{
	CLR(head,-1);
	tot=0;
}
void addedge(int u,int v)
{
	e[tot]=(E){v,head[u]},head[u]=tot++;
}
int type[sz],sta[sz];
bool vis[sz];
int top;
bool dfs1(int u)
{
	for(int i=head[u];i!=-1;i=e[i].nxt)
	{
		int v = e[i].v;
		bool flag = false;
		if(type[u]==3)
        {
            if(type[v]!=3) {type[v]=3;flag=true;}
        }
        else if(type[u]==1)
        {
            if((type[v]&2)==0) { type[v]|=2;flag=true;}
        }
        else
        {
            if((type[v]&1)==0) { type[v]|=1;flag=true;}
        }
        if(flag)
        {
        	sta[top++]=v;
        	if(dfs1(v)) return true;
        	top--;
        } 
	}
	if(head[u]==-1 && (type[u]&2)) return true;
	return false;
}
int num ,in[sz];
void dfs2(int u)
{
	vis[u]=1;
	num++;
	for(int i=head[u];i!=-1;i=e[i].nxt)
	{
		int v= e[i].v;
		in[v]++;
		if(!vis[v])dfs2(v);
	}
}

bool toposort()
{
	queue<int> q;
	f(i,1,n)
	{
		if(vis[i] && in[i]==0) q.push(i);
	}
	int cnt =0;

	while(!q.empty())
	{
		int u =q.front();
		q.pop();
		cnt++;
		for(int i=head[u];i!=-1;i=e[i].nxt)
		{
			int v= e[i].v;
			if((--in[v])==0)q.push(v);
		}
	}
	if(cnt==num) return true;
	return false;


}

void work()
{
	init();
    cin>>n>>m;
    f(i,1,n)
    {
    	cin>>s;
    	f(j,1,s)
    	{
			cin>>t;
    		addedge(i,t);
    	} 
    }
    cin>>s;
    sta[top++]=s;
    type[s]=1;
    if(dfs1(s))
    {
    	cout<<"Win"<<endl;
      	f(i,0,top-1)
           cout<<sta[i]<<" ";
    }
    else
    {
    	CLR(vis,0);
    	dfs2(s);
    	if(!toposort()) puts("Draw");else puts("Lose"); 
    }  
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
   
    return 0; 
}