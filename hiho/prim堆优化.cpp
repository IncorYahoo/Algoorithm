#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
struct node 
{
	int u,v,w;
	bool operator < (const struct node & n)const
	{
		return w > n.w; 
	}
};
vector<node> heap;
vector<node>g[sz];
bool vis[sz];
int n,m,u,v,w;
void push(node & n)
{
	heap.push_back(n);
	push_heap(heap.begin(),heap.end());
}
void pop()
{
	pop_heap(heap.begin(),heap.end());
	heap.pop_back();
}
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,m)
	{
		cin>>u>>v>>w;
		g[u].push_back((node){u,v,w});
		g[v].push_back((node){v,u,w});		
	} 
	vis[1]=1;
	f(i,0,g[1].size()-1)
	{
		push(g[1][i]);
	}
	int all=0;
	int cnt= 0;
	while(cnt<n-1)
	{
		int w= heap[0].w;
		int v = heap[0].v;
		pop();
		if(vis[v])continue;
		vis[v]=true;
		all+=w;
		cnt++;
		f(i,0,g[v].size()-1)
		{
			if(!vis[g[v][i].v])
				push(g[v][i]);
		}

	}
	cout<<all<<endl;
	return 0;
}
