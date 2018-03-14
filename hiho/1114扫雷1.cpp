#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
int a[sz];
int vis[sz];
int t,n,cnt;
bool check()
{
	if(n==1) 
	{
		vis[1]=a[1];
	return true;
	}
	f(i,1,n)
	{
		if(i==n)
		{
			if(vis[i]+vis[i-1]==a[i])
				return true;
			else return false;
		}
		else 
		{
			vis[i+1]=a[i]-vis[i]-vis[i-1];
			if(vis[i+1]<0||vis[i+1]>1) return false;
		}
	}
}
int main()
{
	LOACL
	cin>>t;
	while(t--)
	{
		CLR(a,0);
		CLR(vis,0);
	 
		cin>>n;
		f(i,1,n)cin>>a[i];
		while(1)
		{
			vis[1]=1;
			if(check()) break;
			vis[1]=0;
			if(check()) break;
		}
		int s =0;
		f(i,1,n) if(vis[i]==1)s++;
		cout<<s<<" ";
		f(i,1,n) if(vis[i]==1) cout<<i<<" ";cout<<endl;

		cout<<n-s<<" ";
		f(i,1,n) if(vis[i]==0) cout<<i<<" ";cout<<endl;

	} 	
	return 0;
}
