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

ll ans=1 ;
//I l

//o 0

int main()
{
    LOACL
    FASTIO
    char c;
    while(scanf("%c",&c)!=EOF)
    {
    	if(c=='i'||c=='I'||c=='l'||c=='L')
    		ans = ans*4%mod;
    	else if(c=='0'||c=='O'||c=='0')
    		ans = ans *3%mod;
    	else if(c>='a' && c<='z')
    		ans =ans*2%mod;
    	else if(c>='A'&&c<='Z')
    		ans =ans*2%mod;
    }
    cout<<ans<<endl;

    CLOCK
    return 0;
}