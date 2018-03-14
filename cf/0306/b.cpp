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
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
ll a,b;

void work()
{
	cin>>a>>b;
	while(1)
	{
		if(a==0||b==0)
		{
			break;
		}
		else
		{
			if(a>=2*b)
			{
				a=a-a/(2*b)*(2*b);
				continue;
			}
			else
			{
				if(b>=2*a)
				{
					b=b-b/(2*a)*(2*a);
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}   
	cout<<a<<" "<<b<<endl; 
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    
    work();
   
    return 0; 
}