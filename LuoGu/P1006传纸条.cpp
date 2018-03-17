#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
int n,m;
int a[300][300],f[600][300][300];
int mm( int a,int b,int c,int d)
{
	 return max(a,max(b,max(c,d)));
 }
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,n)f(j,1,m)cin>>a[i][j];
 	f(k,1,n+m-1)	
	f(i,1,n)f(j,1,n)
	{
		if(k-i+1<1||k-j+1<1) continue;
	 //   f[k][i][j]=mm(f[k-1][i][j],f[k-1][i-1][j-1],f[k-1][i][j-1],f[k-1][i-1][j]) + a[i][k-i+1] + a[j][k-j+1];
		f[k][i][j]=mm(f[k-1][i][j],f[k-1][i-1][j-1],f[k-1][i-1][j],f[k-1][i][j-1])+a[i][k-i+1]+a[j][k-j+1];
		if(i==j)f[k][i][j]-=a[i][k-i+1];
	}
 


	cout<<f[n+m-1][n][n]<<endl;

	return 0;
}
