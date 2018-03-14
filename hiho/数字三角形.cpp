#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =200; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int a[maxn][maxn];
int main()
{
    freopen("in","r",stdin);  
  freopen("out","w",stdout);
  int n;
  cin>>n;
  f(i,1,n)f(j,1,i)
      cin>>a[i][j];
  f(i,2,n)f(j,1,i)
      a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
  int ans=0;
  f(i,1,n)ans=max(ans,a[n][i]);
  cout<<ans<<endl;
  return 0; 
}


