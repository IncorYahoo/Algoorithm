#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =500; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int n,m;
int f[maxn][maxn];
int main()
{
     
    freopen("in","r",stdin);
  //  freopen("out","w",stdout);
    cin>>n>>m;
    f[0][0]=1;
    f(i,1,n)f(j,1,min(i,m)) 
    	 f[i][j]=f[i-j][j]+f[i-1][j-1];
 	cout<<f[n][m]<<endl;
    return 0; 
}

