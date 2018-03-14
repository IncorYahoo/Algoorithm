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
int n,x,y;
int a[sz],b[sz],c[sz],d[sz];
void work()
{
    cin>>n;
    f(i,1,n)cin>>a[i]>>b[i]>>c[i]>>d[i];
    cin>>x>>y;
    bool flag =false;
    int ans=0;
    g(i,n,1)if(a[i]<=x&&a[i]+c[i]>=x&&b[i]<=y&&b[i]+d[i]>=y){
    	flag=true;
    	ans=i;
    	break;
    }
    if(flag)cout<<ans<<endl;
    else cout<<-1<<endl;
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
   //3  freopen("out","w",stdout);
    work();
    
    return 0; 
}