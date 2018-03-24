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
int a[sz];
int gcd(int x, int y)
{
    if (x == 0) return y;
    return gcd(y%x, x);
}
int main()
{
    LOACL
    cin>>n;
    f(i,1,n)cin>>a[i];
    sort(a+1,a+n+1);
    int tmp = 0;
    f(i,2,n)  tmp=gcd(tmp,a[i]-a[i-1]);
 
    int res  = (a[n]-a[1])/tmp+1-n; 
    cout<<res<<endl; 
    

    return 0;
}

 