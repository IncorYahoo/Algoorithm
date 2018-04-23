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

struct node
{
	int val,x,id;
	bool operator < (const node & r)
	{
		return val<r.val;
	}
	bool operator > (const node & r)
	{
		return val>r.val;
	}
}e[sz];
int heap_size ;

int n,m,a[sz],b[sz],c[sz] ;
void CHANGE(int l,int r)
{
	swap(e[l],e[r]);
}
void MIN_HEAPIFY(int x)
{
	int l = 2*x;
	int r = 2*x+1;
	int si;
	if(l<=heap_size && e[x]<e[l])si = x;
	else si=l;
	if( r<=heap_size && e[si]>e[r])si=r;
	if(si!=x && si<=heap_size)
	{
	//	DBG2(si,x);
	//	DBG2(e[si].val,e[si].id);
	 //	DBG2(e[x].val,e[x].id);
	 	CHANGE(si,x);
	// 	DBG2(e[si].val,e[si].id);
	// 	DBG2(e[x].val,e[x].id);
	 	MIN_HEAPIFY(si);
	}
}
void BUIL_HEAP()
{
	for(int i = heap_size/2;i>0;i--)
		 MIN_HEAPIFY(i);
}



int main()
{
    LOACL
    FASTIO
    cin>>n>>m;
    REP(i,1,n)
    {
    	cin>>a[i]>>b[i]>>c[i];
    	 
    	e[i]=(node){a[i] +b[i] +c[i],1,i};
    }
    heap_size =n ;

    BUIL_HEAP();
    REP(i,1,m)
    {
    	cout<<e[1].val<<" ";
    	e[1].x++;
    	e[1].val = a[e[1].id]*e[1].x*e[1].x+b[e[1].id]*e[1].x+c[e[1].id];
    	MIN_HEAPIFY(1);
    }
    //REP(i,1,n) DBG2(e[i].val,e[i].id);


     
    return 0;
}