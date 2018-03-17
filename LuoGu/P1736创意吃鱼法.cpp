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
int a[2505][2505],s1[2505][2505],s2[2505][2505],n,m,ans;
int main()
{
	LOACL
	while(cin>>n>>m)
	{
		CLR(s1,0);
		CLR(s2,0);

		f(i,1,n) f(j,1,m) cin>>a[i][j];
		f(i,1,n) f(j,1,m) 
		{
		 	s1[i][j]=s1[i-1][j-1]+a[i][j];
		 	s2[i][j]=s2[i+1][j+1]+a[i][j];
		}
		ans = 0;

		f(i,1,m){
			ans =max(ans,s1[n][i]);
			ans = max(ans,s2[n][i]);
		} 
		f(i,1,n) {
			ans =max(ans,s1[n][i]);
			ans = max(ans,s2[1][i]);
		}	
		cout<<ans<<endl; 

	}
	return 0;
}
