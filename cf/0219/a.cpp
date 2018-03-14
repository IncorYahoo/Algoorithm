#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const dl maxn =1e3+5; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int n;
int main()
{
     
  //  freopen("in","r",stdin);
    cin>>n;
    int ans=0;
    f(i,1,n>>1)
    {
    	if( n%i==0)
    		ans++;
    }

    cout<<ans<<endl;

    return 0; 
}

