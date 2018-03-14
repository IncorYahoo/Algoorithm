#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long ll; 
priority_queue<ll> q;
char c;
int n;
ll t ;
int main()
{
	LOACL
	cin>>n;
	f(i,1,n)
	{
		cin>>c;
		if(c=='A')
		{
			cin>>t;
			q.push(t);
		}
		else 
		{
			cout<<q.top()<<endl;
			q.pop();
		}
	}
	return 0;
}
