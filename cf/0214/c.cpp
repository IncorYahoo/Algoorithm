#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define f(i,l,r) for(int i=l;i<=r;i++)
#define g(i,l,r) for(int i=l;i>=r;i--)
const int maxn  = 2005 ; 

int a[maxn],b[maxn],c[maxn], n,ans= -2147483647;
int dp[maxn][maxn][2];
int main()
{
 
	cin>>n;
	f(i,1,n)cin>>a[i]; 
 	f(i,1,n) b[i]=b[i-1]+(a[i]==1);
	g(i,n,1) c[i]=c[i-1]+(a[i]==2) ;

	f(i,1,n)
	{
		f(j,1,n)
		{
			dp[i][j][0]=dp[i][j-1][0]+(a[i]==1);
			dp[i][j][1]=max(dp[i][j-1][1],d[i][j-1][0])+(a[i]==2);
			ans=max(ans,dp[i][j][0]+b[i-1]+c[j+1]);
			ans=max(ans,dp[i][j][1]+b[i-1]+c[j+1]); 
		}
	}

	cout<<ans<<endl;












	return 0;

}