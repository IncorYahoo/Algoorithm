#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
            freopen("out","w",stdout); 
typedef long long ll; 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
const int maxn=1e6+5;

struct Edge
{
    int v,id;
};

int n,m,id ;
bool hasfa[maxn];
int color[maxn],ans[maxn];
int father[maxn];
map<string,int> idx;
string str[maxn];    
vector<int>graph[maxn];  
vector<Edge>edge[maxn]; 
string s1,s2;

int getf(int x){
    if(x!=father[x])
        father[x]=getf(father[x]);
    return father[x];
}
int getid(string  s )
{
   if(idx.count(s))
        return idx[s];
    idx[s]=++id;
    str[id]=s;
    return id;
}
void tarjan(int u)
{
    color[u]=1;
    for(int i=0;i<edge[u].size();i++)
    {
        int id = edge[u][i].id;
        if(ans[id])continue;
        int v= edge[u][i].v;
        if(color[v]==0)continue;
        if(color[v]==1) ans[id]=v; 
        if(color[v]==2) ans[id]=getf(v); 
    }
    for(int i=0;i<graph[u].size();i++)
    {
        int vv= graph[u][i];
            tarjan(vv);
        color[vv]=2;
        father[vv]=u; // 父节点 标记
    }
}




void init()
{
    f(i,0,maxn-1)
    {
        graph[i].clear();
        edge[i].clear();
        father[i]=i;
    }
     
    memset(ans,0,sizeof(ans));  
    memset(color,0,sizeof(color));  
    memset(hasfa,false,sizeof(hasfa));  
    idx.clear(); id=0;  
}
void input()
{
    cin>>n;
    f(i,1,n)
    {
        cin>>s1>>s2;
        int idx1 = getid(s1);
        int idx2 = getid(s2);
        graph[idx1].push_back(idx2);  //添加边
        hasfa[idx2]=true;  
    }
    cin>>m;
    f(i,1,m)
    {
        cin>>s1>>s2;
        int idx1 = getid(s1);
        int idx2 = getid(s2);
        edge[idx1].push_back((Edge){idx2,i});
        edge[idx2].push_back((Edge){idx1,i});
    }
}
void slove()
{
    int root =0;
    f(i,1,n)if(!hasfa[i])root= i;
    tarjan(root);
    f(i,1,m)cout<<str[ans[i]]<<endl;

}
int main()
{
    LOACL
    init();
    input();
    slove();
    return 0;
}
