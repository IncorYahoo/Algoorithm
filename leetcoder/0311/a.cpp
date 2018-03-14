#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 2e6 + 5;
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
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
ll n;
ll a[sz];
void work()
{
    cin>>n;
    f(i,1,n)
    {
    	cin>>a[i];
    	a[i+n]=a[i];
    }
    int k=0;
    bool flag=false;
    f(i,1,n)
    {
    	ll s = 0;
    	k=i;
    	f(j,i,i+n)
    	{
    		s+=a[j];
    		if(s<=0)
    			break;
    	}
    	if(s>0){
    		flag=true;
    		break;
    	}
    }
    if(flag)
    cout<<k<<endl;
	else cout<<-1<<endl;
}

int main()
{
    FAST_IO ;

    
    work();
   
    return 0; 
}