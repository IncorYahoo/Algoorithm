#include<iostream>
#include<stdio.h>
#include<cmath>
#include<set>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
const int inf=1e9;
int a,b,n,u,v,d,has[10],S[10],V[10],pre[maxn],cur[maxn],dis[maxn];
queue<int> q;
bool vis[maxn];
int gcd(int a,int b){return b==0?a:gcd(b,a%b);}
int spfa()
{
    int ans=inf,ret=d;
    int U=u;u%=d;
    q.push(u);
    dis[u]=V[has[U]],pre[u]=-1,cur[u]=U,vis[u]=1;
    while(!q.empty())
    {
        int now=q.front();
        //printf("now:%d\n",now);
        q.pop();vis[now]=0;
        if((now*10+v)%d==0&&ans>dis[now]+V[has[v]])
            ans=dis[now]+V[has[v]],ret=now;
        for(int i=0;i<10;i++)
        {
            if(has[i]==n) continue;
            int nxt=(now*10+i)%d;
            //cout<<"nxt:"<<dis[nxt]<<endl;
            if(dis[nxt]>dis[now]+V[has[i]])
            {
                dis[nxt]=dis[now]+V[has[i]];   
                //cout<<dis[nxt]<<endl;
                pre[nxt]=now,cur[nxt]=i;
                if(!vis[nxt]) q.push(nxt),vis[nxt]=1;
            }
        }
    }
    return ret;
}
void print(int now)
{
    //printf("%d\n",pre[now]);
    if(pre[now]!=-1) print(pre[now]);
    printf("%d",cur[now]);
}
int main()
{
    //freopen("in.txt","r",stdin);
    scanf("%d%d%d",&a,&b,&n);
    d=gcd(a,b);
    for(int i=0;i<10;i++) has[i]=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&S[i]);
        has[S[i]]=i;
    }
    for(int i=0;i<n;i++) scanf("%d",&V[i]);
    scanf("%d%d",&u,&v);
    for(int i=0;i<d;i++) dis[i]=inf;
    int ans=spfa();
    if(ans==d) printf("-1\n");
    else print(ans),printf("%d\n",v);
    return 0;
}