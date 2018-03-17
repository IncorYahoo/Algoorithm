#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
            freopen("out","w",stdout); 

 
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
#define N 110
#define inf 1000000007
int dp1[N][N][2],dp2[N][N][2];
char a[N];
 int i,j,k,n,len,ans;
int main()
{
    LOACL
    cin>>a+1>>n;
    len =strlen(a+1);
    CLR(dp1,-inf);
    CLR(dp2,inf);

 /*
    f(i,0,len) f(j,0,len) f(k,0,1)
    {
        dp1[i][j][k]=-inf;
        dp2[i][j][k] =inf;
    }
*/
    ans= 0;
    dp1[0][0][0]=0;

  f(i,1,len) f(j,0,n) f(k,0,n-j)
  {

    if(k%2)
    {
            if(a[i]=='T')
            {
                if(dp1[i-1][j][1]!=-inf)
                dp1[i][j+k][1]=max(dp1[i][j+k][1],dp1[i-1][j][1]-1);
                if(dp1[i-1][j][0]!=-inf)
                dp1[i][j+k][0]=max(dp1[i][j+k][0],dp1[i-1][j][0]+1);
            }
            else
            {
                if(dp1[i-1][j][1]!=-inf)
                dp1[i][j+k][0]=max(dp1[i][j+k][0],dp1[i-1][j][1]);
                if(dp1[i-1][j][0]!=-inf)
                dp1[i][j+k][1]=max(dp1[i][j+k][1],dp1[i-1][j][0]);
            }
    }
    else
    {
            if(a[i]=='F')
            {
                if(dp1[i-1][j][1]!=-inf)
                dp1[i][j+k][1]=max(dp1[i][j+k][1],dp1[i-1][j][1]-1);
                if(dp1[i-1][j][0]!=-inf)
                dp1[i][j+k][0]=max(dp1[i][j+k][0],dp1[i-1][j][0]+1);
            }
            else
            {
                if(dp1[i-1][j][1]!=-inf)
                dp1[i][j+k][0]=max(dp1[i][j+k][0],dp1[i-1][j][1]);
                if(dp1[i-1][j][0]!=-inf)
                dp1[i][j+k][1]=max(dp1[i][j+k][1],dp1[i-1][j][0]);
            }
    }
    if(dp1[len][n][0]!=-inf)
        ans=max(ans,abs(dp1[len][n][0]));
    if(dp1[len][n][1]!=-inf)
        ans=max(ans,abs(dp1[len][n][1]));


  }






    return 0;
}
