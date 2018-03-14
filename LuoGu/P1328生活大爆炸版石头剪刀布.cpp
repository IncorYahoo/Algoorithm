#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
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
int a[sz],b[sz],l,r, n,na,nb;
int g[5][5] = 
{
	0,-1,1,1,-1,
	1,0,-1,1,-1,
	-1,1,0,-1,1,
	-1,-1,1,0,1,
	1,1,-1,-1,0
}; 
void work()
{
    cin>>n>>na>>nb;
    f(i,1,na) cin>>a[i];
    f(i,1,nb) cin>>b[i];
    f(i,na+1,n) a[i]=a[i-na];
    f(i,nb+1,n) b[i]=b[i-nb];
    f(i,1,n) 
    if(g[a[i]][b[i]]==1) l++;
    else if(g[a[i]][b[i]]==-1) r++;
	cout<<l<<" "<<r<<endl;



}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    
    return 0; 
}