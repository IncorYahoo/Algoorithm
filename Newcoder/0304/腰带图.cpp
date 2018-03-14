#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 305;
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
struct edge
{
	int t,nxt;
} e[sz<<1];
int head[sz],tot;
int T;
int n,m,s,t;
 
int q[sz],dis[sz];
int mark[sz],TIM,mk[sz];
int p[sz];
int cnt[sz];
int deg[sz];

void add(int  u ,int v)
{
	e[tot++] = (edge){v,head[u]},head[u]=tot;
	e[tot++] = (edge){u,head[v]},head[v]=tot; 
}
void init()
{
	CLR(e,0);
	CLR(head,-1);
	tot= 0 ;

	cin>>n>>m;
	f(i,1,m)
	{
		cin>>s>>t;
		add(s,t);
		deg[s]++,deg[t]++; 
	}
	f(i,1,n)	if(deg[i]!=3){	cout<<-1; return ;}
	if(n<6||(n&1)||n*3!=m*2){	cout<<-1; return;}
	int l,r,x;
	l=r=0; 
	dis[1]=1 ,q[r++]=1;
	while(l<r)
	{
		x = q[l++];
		for(int i = head[x];i!=-1;i=e[head[i]].nxt)
		{
			if( dis[e[head[i]].t] == 0)
			{
				dis[e[head[i]].t] = dis[i]+1;
				q[r++]=dis[e[head[i]].t] ;
			} 
		}
	}
	 
}
void work()
{
	cin>>T;
	while(T--)
	{
		init();
		 
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