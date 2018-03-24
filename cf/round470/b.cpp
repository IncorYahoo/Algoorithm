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

ll n,v[sz],t[sz],s[sz],a[sz],b[sz];

int main()
{
    LOACL
    cin>>n;
    f(i,1,n)cin>>v[i];
    f(i,1,n){ cin>>t[i];s[i]=s[i-1]+t[i];}
    f(i,1,n)
    {
    	int l=i,r=n,ans=i-1;
    	while(l<=r)
    	{
    		int mid = l+r>>1;
    		if(s[mid]-s[i-1]<=v[i])
    			ans = mid,l=mid+1;
    		else r= mid-1;
    	}
    	a[ans]++;
    	a[i-1]--;
    	b[ans+1]+=min(t[ans+1],v[i]-(s[ans]-s[i-1])); 
    }
    g(i,n-1,1) a[i] += a[i + 1];
    f(i,1,n) cout<<a[i]*t[i]+b[i]<<" ";
 
    return 0;
}