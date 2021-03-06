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
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int n,m,k,l,r,mid;

int main()
{
    LOACL
    FASTIO
    cin>>n>>m>>k;
    l=1,r=m;
    while(r-l>1) 
  //  REP(i,1,5)
    {
    	mid=(l+r)>>1;
       // DBG(mid);  
    	int s =  n*mid - (k-1)*(k)/2- (n-k)*(1+n-k)/2;
	  //	DBG(s);     	
    	if(s >  m)  r=mid; 
    	else l=mid;
     //   DBG(l);  
     //   DBG(r); 
    }
	 
    cout<<min(l,r)<<endl;

    CLOCK
    return 0;
}
