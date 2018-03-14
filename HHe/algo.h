#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define INF 0x7f
const int N =10005; 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)




#include<iostream>
using namespace std;
#define INF 0x7f
const int N =10005;
#define  FO(i,L,R) for(int i=L;i<=R;++i)
#define  FR(i,L,R) for(int i=L;i>=R;--i)
typedef long long ll ;
ll ans,x,g[N][N],minn[N];
bool vis[N];
int n;
int prime(){
	cin>>n;
	FO(i,1,n)FO(j,1,n)cin>>g[i][j];
	memset(vis,false,sizeof(vis));
	memset(minn,INF,sizeof(minn));
	minn[1]=0;
	FO(i,1,n){
		int k=0;
		FO(j,1,n)
			if(!vis[j]&&(minn[k]>minn[j]))
				k=j;
			vis[k]=true;
		FO(j,1,n)
			if(!vis[j]&&minn[j]>g[i][j])
				minn[j]=g[k][j];
	}
	FO(i,1,n)
	ans+=minn[i];
	cout<<ans<<endl;
	return 0;
}
//O(n) manacher算法 
 #include<iostream>
using namespace std;
#define INF 0x7f
const int N =10005; 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
 
int l,len,p[N<<1];
char s[N],S[N<<1];
void manacher(){
	scanf("%s",s);len=strlen(s);
    l=-1;
    for(int i=0;i<len;i++) S[++l]='#',S[++l]=s[i];
    S[++l]='#';

	int ans =0 ,id =0,mx=-1;
	f(i,1,l-1){
		if(id+mx>i)
			p[i]=min(p[id*2-i],id+mx-i);
		while(i-p[i]-1>=0&&i+p[i]+1<=l&&S[i-p[i]-1]==S[i+p[i]+1])
			p[i]++;
		if(id+mx <i+p[i])
			id=i,mx=p[i];
		ans=max(ans,p[i]); 
    }
   
    printf("%d\n",ans);
}


//lcp 算法 
 int n,c[N],h[N],sa[N],tsa[N],ran[N],tran[N];
char s[N];
struct Suffix{
    void DA(int maxx=256){
        int p;
        for(int i=0;i<=maxx;i++) c[i]=0;
        for(int i=1;i<=n;i++) c[ran[i]=s[i]]++;
        for(int i=2;i<=maxx;i++) c[i]+=c[i-1];
        for(int i=n;i;i--) sa[c[ran[i]]--]=i;
        tran[sa[1]]=p=1;
        for(int i=2;i<=n;i++){
            if(ran[sa[i]]!=ran[sa[i-1]]) p++;
            tran[sa[i]]=p;
        }
        for(int i=1;i<=n;i++) ran[i]=tran[i];
        for(int k=1;p<n;k<<=1,maxx=p){
            p=0;
            for(int i=n-k+1;i<=n;i++) tsa[++p]=i;
            for(int i=1;i<=n;i++) if(sa[i]>k) tsa[++p]=sa[i]-k;
            for(int i=0;i<=maxx;i++) c[i]=0;
            for(int i=1;i<=n;i++) tran[i]=ran[tsa[i]];
            for(int i=1;i<=n;i++) c[tran[i]]++;
            for(int i=2;i<=maxx;i++) c[i]+=c[i-1];
            for(int i=n;i;i--) sa[c[tran[i]]--]=tsa[i];
            tran[sa[1]]=p=1;
            for(int i=2;i<=n;i++){
                if(ran[sa[i]]!=ran[sa[i-1]]||ran[sa[i]+k]!=ran[sa[i-1]+k]) p++;
                tran[sa[i]]=p;
            }
            for(int i=1;i<=n;i++) ran[i]=tran[i];
        }
        for(int i=1,k=0;i<=n;i++){
            int j=sa[ran[i]-1];
            while(s[i+k]==s[j+k]) k++;
            h[ran[i]]=k;if(k>0) k--;
        }
    }
    void work(){
        scanf("%s",s+1);n=strlen(s+1);
        s[++n]='#';int T=n;
        scanf("%s",s+n+1);int t=strlen(s+n+1);
        n+=t;
        DA();
        //min(两个Suffix的lcp){Suffix不包含'#'} 
        int ans(0);
        for(int i=1;i<=n;i++){
            if(ans<h[i]){
                if(sa[i]>T&&sa[i-1]<T) ans=h[i];
                if(sa[i]<T&&sa[i-1]>T) ans=h[i];
            }
        }
        printf("%d\n",ans);
    }
}suffix;

//线段树
 
const int N =100010;
int a[N],sum[N<<2];
void pushup(int rt ){
	sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}
void build(int rt ,int l ,int r){
	if(l==r){
		sum[rt]=a[l];return ;
	}
	int m = (l+r)>>1;
	build(rt<<1,l,m);
	build(rt<<1|1,m+1,r);
	pushup(rt);
}
void update(int rt ,int l,int r,int pos,int c){
	if(l==r){
		sum[rt]+=c; return ;
	}
	int m= (l+r)>>1;

	if(pos <=m)    update(rt<<1,l,m,pos,c);
	else   update(rt<<1|1,m+1,r,pos,c);
	pushup(rt);
}
int query(int rt ,int l ,int r,int a,int b){
	if(l==a && r==b) return sum[rt];
	int m =(l+r)>>1;
 
	if(b<=m) return query(rt<<1,l,m,a,b);
	else if(a> m) return query(rt<<1|1,m+1,r,a,b);
	else return query(rt<<1,l,m,a,m) + query(rt<<1|1,m+1,r,m+1,b);
}
int main()
{
	ios::sync_with_stdio(false); 
	int n,opt,x,y,m;
	cin>>n;
	f(i,1,n)cin>>a[i];
	build(1,1,n);
	cin>>m;
	f(i,1,m){
		cin>>opt>>x>>y;
		switch(opt){
		case 1:
			update(1,1,n,x,y);
			break;
		case 2:
			cout<<query(1,1,n,x,y)<<endl;
			break;
		}
	}
	return 0;
}

//  卡特兰数  
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
#define INF 0x7f 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define mod 1000000007
const int N = 2000000;
ll jc[N+5]={1},inv[N+5]={1};
ll Pow(ll a ,ll b); //a^b
ll Cata(ll a ,ll b); //卡特兰数
ll C( ll n ,ll m);

int main(){
	//阶乘和逆元打表
	f(i,1,2000001)
		jc[i]=jc[i-1]*i%mod;
	//费马小定理
	inv[2000001] = Pow(jc[2000001],mod-2);
	g(i,N,1)
		inv[i] = inv[i+1]*(i+1)%mod;
	int t ; int n,m,k;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		cout<<Cata(m-1,m-k)*Cata(n-(m-k),n-m)%mod<<endl;
	}
	return 0;
}
 
ll Pow (ll a ,ll b){
	ll  ans =1;
	while(b){
		if(b%2==1)
			ans =ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}
ll Cata(ll a ,ll b){
	return (C(a+b,a)-C(a+b,a+1)+mod)%mod;
}
ll C( ll n ,ll m){
	 return  n<m? 0:jc[n]*inv[m]%mod*inv[n-m]%mod;
}


//迷宫 bfs
 #include<iostream>
 #include<string.h>
#include<queue>
using namespace std;
#define INF 0x7f7f7f7f
const int N =501; 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int n,m; int ans;
char g[N][N];
struct Node{
	int x,y,step;
}s,e,k;
bool vis[N][N];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
void bfs(Node s,Node e,bool key)
{
	memset(vis,0,sizeof(vis));
	Node f ;
	queue<Node> q ;
	f.x=s.x;f.y=s.y;f.step=s.step;
	q.push(f);
	while(q.size())
	{
		Node t = q.front();
		q.pop();
		f(i,0,3)
		{ 
			int x=dx[i]+t.x;
			int y=dy[i]+t.y;
			 
			if(x>=1&& x<=n-1&&y>=1&&y<=m-1 &&!vis[x][y] 
			&&g[x][y]!='W'&&g[x][y]!='D'||(g[x][y]=='D'&&key ==true) )
			{
				if(g[x][y]=='E')
				{
					ans=min(ans,t.step+1);
					return ;
				}
				else if(g[x][y] =='K')
					k.step=t.step+1;
				vis[x][y]=true;
				Node tmp ;tmp.x=x;tmp.y=y;tmp.step=t.step+1;
				q.push(tmp);

			}

		}




	}
}
int main(){
	cin>>n>>m;
	f(i,1,n)cin>>g[i];
	f(i,1,n)f(j,1,m){
		if(g[i][j] == 'S')
		{
			s.x = i;s.y=j;s.step = 0;
		}
		else if(g[i][j] == 'E')
		{
			e.x=i;e.y=j;
		}
		else if(g[i][j] == 'K')
		{
			k.x=i;k.y=j;k.step=-1;
		}
	}
	ans =INF;
	bfs(s,e,false);
	if(k.step!=-1)bfs(k,e,true);
	if(ans ==INF)cout<<-1<<endl;
	else cout<<ans<<endl;
	return 0;
}