#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOW(i, a, b)  for(int i=(a); i>(b); i--)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
ll n,m,c;
ll ans;
struct node
{
	ll x,y;
}a[sz];
bool cmp(node x,node y)
{
	if(x.x==y.x) return x.y<y.y;
	return x.x < y.x;
}

int main()
{
    LOACL
    FASTIO
    
    cin>>n>>m>>c;
    REP(i,1,c) cin>>a[i].x>>a[i].y;
    sort(a+1,a+c+1,cmp);
	ans = n*(n+1)/2%mod;     
	ans =  ans*(m*(m+1)/2%mod) %mod;
	for(int i=1;i<=c;++i){
        int x=a[i].x,y=0,z=m;
        ll tmp=0;
      //  printf("%d %d ===\n",a[i].x,a[i].y);
        for(int j=i-1;j>0 && y<a[i].y && z>=a[i].y;--j){
            if(a[j].y<=a[i].y){
                if(a[j].y>y){
                    ans-=ll(x-a[j].x)*(a[i].y-y)%mod*(n-a[i].x+1)%mod*(z-a[i].y+1)%mod;;
                   // printf("1  %d %d   %d %d  %d %d\n",x,a[j].x,y,a[i].y,n-a[i].x+1,z);
                    x=a[j].x;
                    y=a[j].y;
                }
            }else{
                if(a[j].y<=z){
                    ans-=ll(x-a[j].x)*(a[i].y-y)%mod*(n-a[i].x+1)%mod*(z-a[i].y+1)%mod;;
                   // printf("2  %d %d   %d %d  %d %d\n",x,a[j].x,y,a[i].y,n-a[i].x+1,z);
                    x=a[j].x;
                    z=a[j].y-1;
                }
            }
        }
        if(y<a[i].y)ans-=ll(x)*(a[i].y-y)%mod*(n-a[i].x+1)%mod*(z-a[i].y+1)%mod;
      //  printf("%lld\n",ans);
    }
	ans = (ans+mod)%mod;
	cout<<ans<<endl;

    CLOCK
    return 0;
}