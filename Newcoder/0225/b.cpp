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
 int n,m;
 int a[sz];ll b[sz];
 ll s[sz];
int op,l,r;
int main()
{
     
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cin>>n>>m;
    f(i,1,n)cin>>a[i],s[i]=s[i-1]+a[i];
    f(j,1,m)
    {
    	cin>>op>>l>>r;
    	if(op==1)
    	{
    		f(i,l,n)s[i]+=r;
    	}
    	else
    	{
    		 
    		cout<<s[r]-s[l-1]<<endl;
    	}
    }
    
    return 0; 
}

