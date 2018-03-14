#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll;
const int sz = (int)1e4+6; 
const int inf =0x3f3f3f;


int n,sum;
int g[sz][sz],dis[sz],vis[sz];
void prim()
{
	f(i,1,n)dis[i]=g[1][i];
	vis[1]=1;
//	int ans= 0;
	f(i,1,n-1)
	{
		int mm = inf ,pos;
		f(j,1,n)
		{
			if(!vis[j]&& dis[j]< mm)
			{
				mm =dis[j];
				pos =j;
			}  
		}
		if(mm==inf)break;
		vis[pos]=1;
		f(j,1,n)
		{
			if(!vis[j] && dis[j]>g[pos][j])
			{
				dis[j]=g[pos][j];
			}
		}
	}
}
int main()
{
	LOACL
	
	CLR(dis,inf);
	CLR(vis,0);
	cin>>n;
	f(i,1,n)f(j,1,n)cin>>g[i][j];
	prim();
	f(i,1,n)sum+=dis[i];

	cout<<sum<<endl; 


	return 0;
}
