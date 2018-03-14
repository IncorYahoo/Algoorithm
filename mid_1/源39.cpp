#include<iostream>
using namespace std;
 

int n,m,x1,x2;
int y1,y2;
long long dp[51][51];

int main()
{
	cin>>n>>m;
	cin>>x1>>y1>>x2>>y2;
	dp[x1][y1]=1;
	for(int i=x1;i<=n;++i)
	for(int j=y1;i<=m;++j)
		{
 
			  if(i>=2&&j>1)
				  dp[i][j]+=dp[i-2][j-1];
			  if(i>=1&&j>1)
				  dp[i][j]+=dp[i-1][j-2];
			   if(i+2<=n&&j>1)
				  dp[i][j]+=dp[i+2][j-1];
			    if(i+1<=n&&j>2)
				  dp[i][j]+=dp[i+1][j-2];
		}
	cout<<dp[n][m]<<endl;
}