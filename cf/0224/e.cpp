#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
int main()
{
     freopen("in","r",stdin);  
    int n,k;
    ll a,sum=0;
    cin>>n>>k;
    f(i,1,n)
    {
    	cin>>a;
    	sum+=a;
    }
    cout<<sum<<endl;

    return 0; 
}

