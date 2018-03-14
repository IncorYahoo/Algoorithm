#include <bits/stdc++.h>
using namespace std;
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
int n,m,op,s1,e1,s2,e2;
int bits[sz][sz],a[sz][sz];
void update(int l,int r,int k)
{
	for(int i=l;i<=n;i+=lowbit(i))
		for(int j=r;j<=n;j+=lowbit(j))
			bits[i][j]+=k;
}
int query(int l,int r)
{
	int ans=0;
	for(int i=l;i;i-=lowbit(i))
		for(int j=r;j;j-=lowbit(j))
			ans+=bits[i][j];
	return ans;
}
void work()
{
    cin>>n>>m;
    f(i,1,n)f(j,1,n)
    {
    	cin>>a[i][j];
		if(a[i][j])update(i,j,1);
	}
	f(i,1,m)
	{
		cin>>op;
		if(op==1)
		{
			cin>>s1>>e1;
			int v=(a[s1][e1]^1)-a[s1][e1];
			a[s1][e1]^=1;
			update(s1,e1,v);
		}
		else
		{
			cin>>s1>>e1>>s2>>e2;
			cout<<query(s2,e2)-query(s1-1,e2)-query(s2,e1-1)+query(s1-1,e1-1)<<endl;
		}
	}

    
}
int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    
    return 0; 
}


