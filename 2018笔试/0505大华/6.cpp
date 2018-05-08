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
 
int t,n,a[sz] ;
 

int main()
{
    //  LOACL
    scanf("%d",&t);
   // DBG(t);
  
    while(t--)
    {
    	 
		scanf("%d",&n);
		REP(i,1,n)  scanf("%x",&a[i]);
	//	REP(i,1,n)        printf("%02x %d \n",a[i],a[i]);
		 
		int begin,end ;
		REP(i,1,n) 
		{
			if(a[i]==0&&a[i+1]==0&&a[i+2]==1)
			 {
				begin=i+3;
				break;	
			} 
		}
		REP(i,begin,n) 
		{
			if(a[i]==0&&a[i+1]==0&&a[i+2]==1) end=i-1;
		}
	 
	//	  printf("begin,end %d %d \n",begin,end);
	//	if(a[begin]==0)printf("0");
	//	else printf("%02x",a[begin]);
		REP(i,begin,end)
		{
			 if(a[i]==3)
			{
				if(a[i-1]==0&& a[i-2]==0)
					continue; 
			}	 
		   printf("%x%c",a[i],i==end?'\n':' ' );
		}
		 
    } 
 
    return 0;
} 