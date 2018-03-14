#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
int a[maxn];	int n,m;
void slove()
{
	int ans=0;
	m++;
	if(m>n)
	{
		ans=100;		
	}
	
	else
	{
		f(i,m,n)
		{
			ans=max(ans,a[i]-a[i-m]-1);
		}
	}
	
	cout<<ans<<endl;
}
int main()
{
     
  //  freopen("in","r",stdin);
    int N;
    cin>>N;
    while(N--)
    {
    
    	cin>>n>>m;
    	f(i,1,n)
    		cin>>a[i];
    	slove();
    }

  //  cout<<"hello"<<endl;

    return 0; 
}

