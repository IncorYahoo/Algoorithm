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
int n,a[sz],m;
void work()
{
    cin>>n;f(i,1,n+1)cin>>a[i];
    f(i,1,n)
    {
    	if(i!=1)
    		if(i%2)cout<<"-";
    		else cout<<"+";
    	if(a[i]!=0)cout<<a[i]<<"x^"<<n-i+1;
    }
    cout<<"="<<a[n+1]<<endl;

}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
   
    return 0; 
}