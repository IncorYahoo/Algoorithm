#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)
#define sz 1000100
#define demen 21

int n,m,s,tot,u,v,head[sz],fa[sz][demen],d[sz];
struct node
{int t,nxt;}e[sz];
void add(int u,int v)
{ e[++tot]=(node){v,head[u]},head[u]=tot;}

void dfs(int rt,int f)
{
    d[rt] =d[f]+1;
    fa[rt][0] = f;
    REP(i,1,20)
        fa[rt][i] =fa[fa[rt][i-1]][i-1];
    for(int i=head[rt];i;i=e[i].nxt)
         if(e[i].t!=f)
            dfs(e[i].t,rt);
}
int lca(int x,int y)
{
    if(d[x]<d[y])swap(x,y);

    int dre = d[x] - d[y];
    DOWN(i,20,0)
        if((1<<i)&dre)
            x = fa[x][i];
    if(x==y)return x;
    DOWN(i,20,0)
    if(fa[x][i]!=fa[y][i])
        x = fa[x][i],y=fa[y][i];
    return fa[x][0];
}


int main()
{
    //LOACL
     ios::sync_with_stdio(false);
 
    cin>>n>>m>>s;    
    REP(i,1,n-1)
    {
        cin>>u>>v;
          
          add(u,v),add(v,u);           
    }
    dfs(s,0);
    REP(i,1,m)
    { 
        cin>>u>>v;
        
          printf("%d\n",lca(u,v));
    } 
    return 0;
}