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
bool f[1000000];
std::vector<int> v;
int x,ans=sz;
int main()
{
    LOACL
    f(i,2,1000000-1)
    {
    	if(f[i])continue;
    	v.push_back(i);
    	for(int j=i+i;j<1000000;j+=i)
    		f[j]=true;
    }
    cin>>x;
    f(i,0,v.size()-1)
    {
    	if(x%v[i]) continue;
    	f(j,0,v.size()-1)
    	{
    		if((x-v[i])/v[j]*v[j]+v[j]>x)continue;
    		ans=min(ans,max(v[j]+1,(x-v[i])/v[j]*v[j]+1)); 
    	}
    }
    cout<<ans<<endl;

    return 0;
}
