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

void work()
{
    int T;
    int a,b;

    cin>>T;
    while(T--)
    {
    	cin>>a>>b;
    	if(b==0)
    	{
    		cout<<"No Solution"<<endl;
    		continue;
    	}
    	int c = a/b;
      	cout<<c-(a*b<0||a%b==0)<<endl; 
    	 
    }
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    cout<<"hello"<<endl;

    return 0; 
}