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

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int n,p,res;
vector<int> v[sz];
int cnt[sz];
void dfs(int n,int deep)
{
	cnt[deep]++;
	f(i,0,v[n].size()-1)
	{
		dfs(v[n][i],deep+1);
	} 

}
void work()
{
    cin>>n;
    f(i,1,n-1)
    {
    	cin>>p;
    	v[p].pb(i);
    }
    f(i,1,n)
    cnt[i]=0;
 
 	dfs(1,1);

	f(i,1,n) res+=cnt[i]%2;

    cout << res << endl;


}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}