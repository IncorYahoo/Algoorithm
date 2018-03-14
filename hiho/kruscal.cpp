#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll; 
const int sz =1e6+5;
int n,m ;
 
struct node
{
	int u,v,w;
}no[sz];
bool cmp(node l,node r)
{
	return l.w<r.w;
}
int fa[sz];
 
int getf(int x)
{
	if(x!=fa[x]) fa[x] =getf(fa[x]);
	return fa[x];
}
void uni(int x,int y)
{
	int fx = getf(x);
	int fy = getf(y);
	if(fx!=fy)fa[fx]=fy;
}
int krusal()
{
	int ans=0;
	 
	f(t,1,m)
	if(getf(no[t].u) != getf ( no[t].v))
	{ 
		uni(no[t].u,no[t].v);
		ans+=no[t].w ;
	}
	return ans; 
}
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,m) cin>>no[i].u>>no[i].v>>no[i].w;
	sort(no+1,no+m+1,cmp);
	f(i,1,n)fa[i]=i;
	printf("%d",krusal());
	return 0;
}
