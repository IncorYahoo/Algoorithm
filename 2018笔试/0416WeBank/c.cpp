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
#define REP(i, a, b)  for(int  i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 

 
 ll aa[100]={0,1,2,4,6,10,14,22,30,46,62,94,126,190,
 	254,382,510,766,1022,1534,2046,3070,4094,6142,8190,
 	12286,16382,24574,32766,49150,65534,98302,131070,196606,
 	262142,393214,524286,786430,1048574,1572862,2097150,3145726,
 	4194302,6291454,8388606,12582910,16777214,25165822,33554430,50331646,
 	67108862,100663294,134217726,201326590,268435454,402653182,536870910  };
int main()
{
    LOACL
    ll x,ans=0; ll nx =x,w=0;
    cin>>x;
    
   
	while(nx)
	{
		w++;
		nx/=2;
	}
	REP(i,1,w)
	{
		if(x&(1ll<<i))
			ans+=aa[i];
	}
	if( x&1 ) ans++;	

	cout<<ans+1<<endl;
	 
    return 0;
}