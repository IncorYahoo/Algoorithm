#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

ll poww(ll a,ll b,ll c )
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0) ans = ans*base%c; 
        base= base*base%c;
        b/=2;
    }
   return ans;
}

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int a[sz],t[sz];
ll n,sum;
 
void merge_func(int s1,int e1,int s2,int  e2)
{
    int p=s1,p1=s1,p2=s2;
    while(p1<=e1&&p2<=e2)
    {
        if(a[p1]<=a[p2]) t[p++]=a[p1++];
        else t[p++]=a[p2++],sum+=(e1-p1+1); 
    }
    while(p1<=e1) t[p++]=a[p1++];  
    while(p2<=e2)  t[p++]=a[p2++]; 
    f(i,s1,e2) a[i]=t[i]; 
}
void merge(ll l,ll r)
{
    if(l<r)
    {
        ll mid =(l+r)>>1;
        merge(l,mid);
        merge(mid+1,r);
        merge_func(l,mid,mid+1,r);
    } 
}
void work()
{
    int n ; cin>>n;
    f(i,1,n)cin>>a[i];
    merge(1,n);
     cout<<sum<<endl;
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}