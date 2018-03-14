#include <bits/stdc++.h>
using namespace std;
#define INF 0x7f
const int maxn =1e3+5; 
typedef long long ll ;
typedef double    dl ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
struct node{
	int p,k;
	int a[maxn];
};
node q[maxn];
int n,m;
dl b [maxn];
int t;
dl ti;
int main()
{
	scanf("%d%d",&n,&m);
	f(i,0,n-1)
	{
		scanf("%d%d",&q[i].p,&q[i].k);
		f(j,1,q[i].k)
		scanf("%d",&(q[i].a[j]));
	}
	f(i,1,m)
	{
		scanf("%d%lf",&t,&ti);
		b[t]=max(b[t],ti);
	}	
	
  
	return 0;
}