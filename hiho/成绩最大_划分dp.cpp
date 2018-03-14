#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =200; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
int n,m;
char a[maxn] ;
ll b[maxn][maxn],f[maxn][maxn];
int main()
{
     
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cin>>n>>m;
    f(i,1,n)cin>>a[i];
    f(i,1,n)f(j,i,n)f(k,i,j) b[i][j]=b[i][j]*10+a[k]-'0';
    f(i,1,n) f[i][0]=b[1][i];
    f(i,1,n)f(j,1,m)f(k,1,i-1)f[i][j]=max(f[i][j],f[k][j-1]*b[k+1][i]);
    cout<<f[n][m]<<endl;
   
     
    return 0; 
}

