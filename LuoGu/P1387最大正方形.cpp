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
int a[300][300],f[300][300];
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,n)f(j,1,m)cin>>a[i][j];
	f(i,1,n)f(j,1,m)
	{
		if(a[i][j]==0) continue;
		f[i][j]=min(min(f[i-1][j-1],f[i-1][j]),f[i][j-1])+1;
	}
	int ans = 0;
	f(i,1,n)f(j,1,m) ans=max(ans,f[i][j]);
	cout<<ans<<endl;
	return 0;
}