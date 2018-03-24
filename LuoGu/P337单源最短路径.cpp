#include <bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int inf = 987654321;
const int sz = 1e4 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second
 int u,v,w;
 int head[sz];
 struct node
 {
 	int v,nxt,w; 
 }e[sz];



int main()
{
	FAST_IO
	LOACL 
	CLR(head,-1);
	while(cin>>u>>v>>w)
	{
		add(u,v,w);
	}



	return 0;

}