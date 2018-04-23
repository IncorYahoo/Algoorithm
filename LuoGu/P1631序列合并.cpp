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
int n ,a[sz],b[sz];
ll e[sz];
bool cmp (ll l, ll r)
{
	return l<r;
} 
void MAX_HEAPFIPY(int x) // down  向下搭建 堆 
{
	int l = x<<1;
	int r= x<<1|1;
	int si;
	if(l<=n&&e[l]>e[x]) si=l;
	else si = x;
	if(r<=n && e[r]>e[si])si=r;
	if(si!=x&&si<=n)
	{
		swap(e[si],e[x]);
		MAX_HEAPFIPY(si);
	}
}
void BUIL_HEAP()
{
	for(int i =n/2 ;i>0;i-- )
		MAX_HEAPFIPY(i);
}
int main()
{
    LOACL
    FASTIO
 	cin>>n;
 	REP(i,1,n)   cin>>a[i]; 
 	REP(i,1,n)   cin>>b[i];  

 	REP(i,1,n)   e[i]= a[1]+b[i] ;
   
 	BUIL_HEAP();
 	
 	REP(i,2,n)REP(j,1,n)
 	{
 		if(e[1]  > a[i]+b[j])
 		{
 			e[1]  = a[i]+b[j];
 			MAX_HEAPFIPY(1); 
 		}
 	}
 	sort(e+1,e+n+1,cmp);
  	REP(i,1,n) cout<<e[i]<<" ";
  	CLOCK
    return 0;
}