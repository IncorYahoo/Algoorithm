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

ll n,a[sz],mm=-inf,mn=inf,ansm,ansn,ansmid;
void work()
{
    cin>>n;
    f(i,1,n)
    {
    	cin>>a[i];
    	mm=max(mm,a[i]);
    	mn=min(mn,a[i]);
    }
    if(mm-mn<2)
    {
    	cout<<n<<endl;
    	f(i,1,n)cout<<a[i]<<" ";
    	return ;
    }
    ll ans =n;
    f(i,1,n)
    {
    	if(a[i]==mn)
    		ansn++;
    	else if(a[i]==mm)
    		ansm++;	
    	else if(a[i]==mn+1)
    		ansmid++;
    }
    sort(a+1,a+n+1);
    if(min(ansm,ansn)>ansmid/2)
    {
    	f(i,1,n/2)
    	{
    		if(a[n-i+1] -a[i] ==2 )
    		{
    			a[n-i+1] -- ;
    			a[i]++;
    			ans-=2;
    		}
    	}
    }
    else 
    {
    	f(i,1,n)
    	{
    		if(a[i]==mm-1 && a[i+1]==mm-1)
    		{
    			a[i]++;
    			a[i+1]--;
    			ans-=2;
    		}
    	}
    }
   cout << ans << endl;

  f(i,1,n)
        cout << a[i] << " ";


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