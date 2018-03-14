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

ll   T;
ll a,b,c,d,v;
void work()
{
    cin>>T;
    while(T--)
    {
    
    	cin>>a>>b>>c>>d>>v;
    	ll V=(5-v%5)%5;
        cout<<a+V*((b*5+c*10+d*50)/(v+V))<<endl;
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