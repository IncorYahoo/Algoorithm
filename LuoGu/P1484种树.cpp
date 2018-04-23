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

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int n,k;
ll t ,ans;
struct node
{
	ll i,n;
	bool operator< (const node & r) const
	{
		return  n<r.n;
	}
} ;
 
priority_queue< node> q ;
ll l[sz],r[sz],ok[sz],a[sz];
node tmp;
int main()
{
    LOACL
    FASTIO
	
   	cin>>n>>k;
   	REP(i,1,n)
   	{
   		cin>>a[i];
   		q.push((node){i,a[i]});
   		l[i]=i-1;
   		r[i]=i+1;
   	}

   	r[0]=1;
   	l[n+1]=n;
   	while(k--)
   	{
   		while(ok[q.top().i]) q.pop();
   		tmp = q.top();q.pop();
   		if(tmp.n<0)break;
   		ans+=tmp.n;

   		int x = tmp.i;
   		a[x]=a[l[x]]+a[r[x]]-a[x];
   		tmp.n=a[x];
   		ok[l[x]]=1;ok[r[x]]=1;

   		l[x] = l[l[x]];r[l[x]]=x;
   		r[x]=r[r[x]];l[r[x]]=x;
   		q.push(tmp);
   	}
   	cout<<ans<<endl;



    CLOCK
    return 0;
}
