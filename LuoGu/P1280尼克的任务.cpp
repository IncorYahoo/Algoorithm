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
ll n,m,num=1;
ll sum[sz],f[sz];
struct node
{
	ll l,r;
}e[sz];
bool cmp(node l,node r)
{
	return l.l>r.l;
}
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,m)
	{
		cin>>e[i].l>>e[i].r ;
		sum[e[i].l]++;
	}
	sort(e+1,e+m+1,cmp);
	g(i,n,1)
	{
		if(sum[i]==0)
			f[i]=f[i+1]+1;
		else 
		{
			f(j,1,sum[i])
			{
			if(f[i]<f[i+e[num].r])
				 f[i]=f[i+e[num].r]; 	
			 num++;
			}
		} 
		 
	}
	cout<<f[1]<<endl; 
	return 0;
}
