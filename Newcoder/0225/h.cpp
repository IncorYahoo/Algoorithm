#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second
int n,m,l,r,k;
ll a[sz],sum[sz];
char c;
void add(int l,int r,int k)
{
	f(i,l,r)sum[i]+=k*(i-l+1);
	f(i,r+1,n)sum[i]+=k*(r-l+1);

}
void query(int l,int r)
{
	cout<<sum[r]-sum[l-1]<<endl;
}
void work()
{
    cin>>n>>m;
    f(i,1,n)cin>>a[i],sum[i]=sum[i-1]+a[i];
    f(i,1,m)
    {
    	cin>>c>>l>>r;
    	if(c=='Q')
    		query(l,r);
    	else
    	{
    		cin>>k;
    		add(l,r,k);
    	}
    }

    
}
int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
   
    return 0; 
}

