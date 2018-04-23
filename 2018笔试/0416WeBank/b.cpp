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
ll f[] = {0,9,18,108,198,1098,1998,10998,19998,109998,199998,1099998};
ll ff( ll x )
{
	if(x==0) return 0;
	if(x<10) return x ;
	ll nx=x,ans,w=0,t,a,b,na;
	while(nx)
	{
		w++;
		nx/=10;
	}
	ans = f[w-1];
	t=1;
	REP(i,1,w/2)t*=10;
	if(w%2==0)
	{
		a=(x/t);
		b=(x%t);
		t=t/10;
		ans = ans+a-t;
		na=0;
		while(a)
		{
			na =na*10+a%10;
			a/=10;
		}

	}
	else
	{
		a = (x/t);
		t*=10;
		b=(x%t);
		t=t/10;
		ans=ans+(a-t);
		na=0;
		while(a)
		{
			na =na*10+a%10;
			a/=10;
		}

	}	
	if(b>=na) ans++;
	return ans;
}

int main()
{
    LOACL
   
   ll n;
   cin>>n;
   cout<<ff(n)<<endl;
 
    return 0;
}