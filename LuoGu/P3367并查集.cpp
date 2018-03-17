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
int fa [sz];
int n,m,x,y,op;
int getf(int x)
{
	if(x!=fa[x]) fa[x]=getf(fa[x]);
	return fa[x];
}
void uni(int x,int y)
{
	int fx= getf(x);
	int fy = getf(y);
	if(fx!=fy)
		fa[fx]=fy;

}
int main()
{
	LOACL
	cin>>n>>m;
	f(i,1,n)fa[i]=i;
	f(i,1,m)
	{
		cin>>op>>x>>y;
		if(op==2)
		{
			int fx= getf(x);
			int fy = getf(y);
			if(fx!=fy) cout<<'N'<<endl;
			else 	 cout<<'Y'<<endl;
		}
		else 
		{
			uni(x,y);
		}
	}
	return 0;
}