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

int tot ,sum=1;
ll a[sz];

int main()
{
    LOACL
    ll m ;
    cin>>m;
    while(m)
    {
    	//a[++tot] = m%2==0?m/2:m/2+1;
    	//m/=2;
    	 m%2==0?a[sum]=m/2:a[sum]=m/2+1;//这一坨等价于if(m%2==0) a[sum]=m/2; else a[sum]=m/2+1;
        m/=2;//分治，防止死循环;
          sum++;
    }
    sum--;
    tot=sum;
    sort(a+1,a+tot+1);
    cout<<tot<<endl;
    REP(i,1,tot)
    cout<<a[i]<<" ";






    return 0;
}