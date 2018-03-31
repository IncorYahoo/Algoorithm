#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 1010; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 

int point[sqrtn],nxt[sqrtn<<1],v[sqrtn<<1];
int f[sqrtn][5];
int n,m,x,tot;
 

inline void addedge(int x,int y)
{
	
 	nxt[++tot]=point[x]; point[x]=tot; v[tot]=y;
 	nxt[++tot]=point[y]; point[y]=tot; v[tot]=x;
}

void dp(int now,int fa)
{
    int ans1=inf,ans2=inf;
    if(nxt[point[now]]==-1 && now!=1)
    {
        f[now][2]=f[now][0]=f[now][1]=1;
        f[now][3]=f[now][4]=0;
        return;
    }
    for(int i=point[now]; i!=-1; i=nxt[i])
      if(v[i]!=fa) dp(v[i],now);
    for(int i=point[now]; i!=-1; i=nxt[i])
    {
        if(v[i]==fa) continue;
        f[now][2]+=f[v[i]][4];
        f[now][3]+=f[v[i]][0];
        f[now][4]+=f[v[i]][3];
        ans1=min(ans1,f[v[i]][2]-f[v[i]][3]);
        ans2=min(ans2,f[v[i]][1]-f[v[i]][0]);
    }
    f[now][0]=f[now][3]+ans2;
    f[now][1]=f[now][4]+ans1;
    f[now][2]+=1;
    f[now][4]=min(min(f[now][0],min(f[now][4],f[now][3])),min(f[now][2],f[now][1]));
    f[now][3]=min(min(f[now][3],f[now][2]),min(f[now][1],f[now][0]));
    f[now][0]=min(f[now][0],min(f[now][1],f[now][2])); f[now][1]=min(f[now][1],f[now][2]);
}

int main()
{
    LOACL
    FASTIO
  

    CLR(point,-1);
    CLR(nxt,-1);
    tot=-1;

    cin>>n;
    REP(i,1,n)
    {
    	cin>>x;
    	addedge(i+1,x);
    }
    dp(1,0);
    cout<<f[1][0]<<endl;
    CLOCK
    return 0;
}