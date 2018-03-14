#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
ll n,k,a,b, res=0;

int main()
{

	freopen("in","r",stdin);

	cin>>n>>k>>a>>b;
	if(k==1) res=a*(n-1);
	else
	{
		while(n!=1)
		{
			if(n<k)
			{
				res+=a*(n-1);
				n=1;
			}
			else
			{

				if(n%k!=0)
				{
					res=res+n%k*a;
					n=n-n%k;
				}
				ll t= n/k;
				if(a*(n-t) <b)
					res+=a*(n-t);
				else res+=b;
				n/=k;
			}
		}
	}

	cout<<res<<endl;

	return 0; 
}

