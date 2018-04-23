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
int n,m,t;
ll ans;
struct node{
	int t,l;
}wok[sz],mes[sz];
bool cmp1(node l ,node r)
{
	if(l.t!=r.t) return l.t>r.t;
	return l.l>r.l; 
}

int main()
{
    LOACL
    FASTIO
   	cin>>n>>m;
   	for(int i=1;i<=n;i++)
   	{
   		cin>>wok[i].t>>wok[i].l;
   	} 
	for(int i=1;i<=m;i++)
   	{
   		cin>>mes[i].t>>mes[i].l;
   	} 
   	sort(wok+1,wok+n+1,cmp1);
   	sort(mes+1,mes+m+1,cmp1);
   	for(int i=1,j=1;i<=n&&j<=m;i++,j++)
   	{
   		if(wok[i].t>=mes[j].t && wok[i].l>=mes[j].l)
		{
			t++;
			ans+=(mes[j].t*200+3*mes[j].l);
		}
   		else if(wok[i].t < mes[j].t )
   		{
   			i--;
   		}
   		else if(wok[i].l < mes[j].l)
   		{
   			j--;
   		}
   	}	
   	cout<<t<<" "<<ans<<endl;
 
    return 0;
}