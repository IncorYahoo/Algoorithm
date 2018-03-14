#include<bits/stdc++.h>
using namespace std;
inline void read(int &x){
    x=0; char c=getchar();
    for (;c<48;c=getchar());
    for (;c>47;c=getchar())x=(x<<1)+(x<<3)+(c^48);
}
#define ll long long
#define M 200005
struct ed{int x,l,nx;}e[M<<1];
int ecnt,nx[M],K;
priority_queue<ll>Q;
vector<ll>dis[M];
ll tmp[M];
inline void add(int x,int y,int l){
    e[ecnt]=(ed){y,l,nx[x]};
    nx[x]=ecnt++;  
}
inline void Qadd(ll l){Q.push(-l); if ((int)(Q.size())>K)Q.pop();}
bool cmp(ll x,ll y){return x>y;}
inline void uni(int x,int y,ll l){
    int i,j,szx=dis[x].size(),szy=dis[y].size();
    for (i=0;i<szy;i++){
        dis[y][i]+=l;
        for (j=0;j<szx;j++){
            Qadd(dis[y][i]+dis[x][j]); 
        }
    }
    merge(dis[x].begin(),dis[x].end(),dis[y].begin(),dis[y].end(),tmp,greater<ll>());
    dis[x]=vector<ll>(tmp,tmp+min(K,szx+szy));
}
void dfs(int f,int x){
    dis[x]=vector<ll>(1);
    int i;
    for (i=nx[x];i;i=e[i].nx)if (e[i].x!=f){
        dfs(x,e[i].x);
        uni(x,e[i].x,e[i].l);
    }
}
ll res[M];
int main(){
   freopen("in","r",stdin);
    int n,i,x,y,l;
    read(n); read(K);
     ecnt=1;
    for (i=1;i<n;i++){
        read(x); read(y); read(l); x++; y++;
        add(x,y,l); add(y,x,l);
    }
    dfs(1,1);
    for (i=1;i<=K;i++){res[K-i+1]=-Q.top(); Q.pop();}
    for (i=1;i<=K;i++)printf("%lld\n",res[i]);
    return 0;
}