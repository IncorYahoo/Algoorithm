#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 

const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
int n;
ll a[sz],b[sz],c[sz];
bool vis[sz];

int main()
{
    LOACL
    cin>>n;
    f(i,1,n) cin>>a[i];
    f(i,1,n) cin>>b[i];
    f(i,1,n)
    {
    	ll minx = 0x3f3f3f3fB;

    	int ff = 0;
    	f(j,1,n)
    	{
    		if(vis[j]) continue;
    		if(minx>(a[i]^b[j]))
    		{

    			minx = a[i]^b[j];
    			ff = j;
    		//	cout<<ff<< "    "<<minx<<endl;
    		}
    	}
    	//cout<<ff<< "    "<<minx<<endl;
    	vis[ff]=1;
    	c[i]=minx;
    }
    f(i,1,n) cout<<c[i]<<" ";cout<<endl;

    return 0;
}