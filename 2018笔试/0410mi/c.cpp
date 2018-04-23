#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
 
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
 
typedef unsigned long long ll; 
typedef double dl; 

ll pp(ll n)
{
	ll tmp = n;
	while(n)
	{
		n/=10;
		tmp+=n;
	}
	return tmp;
}

int main()
{
  //  LOACL
   	ll n,t=0;
	cin>>n;
	if(n<10)
	{
		cout<<n<<endl; 
		return 0;
	}
	ll l=1,r = n,mid;
	while(l<r)
	{
		mid = (l+r)/2;
		t = pp(mid); 
		if(t==n) break;
		else if(t<n)l=mid+1;
		else r=mid; 
	}

	if(t==n) cout<<mid<<endl;
	else cout<<-1<<endl; 
    return 0;
}