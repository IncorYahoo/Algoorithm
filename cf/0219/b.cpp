#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 char str[maxn];
int main()
{
     
   // freopen("in","r",stdin);
    int n;
    cin>>n;
    f(i,1,n)
     cin>>str[i];
    int x=0,y=0,ans=0;

	f(i,1,n)
	{
		// cout<<x<<" "<<y<<endl;
		if(str[i]=='U')
		{
			if(y==x&&str[i-1]=='U')
				ans++;
			y++;
		}
		 if(str[i]=='R') 
		{
			if(y==x&&str[i-1]=='R')
				ans++;
			x++;
		}
		 
	}
    cout<<ans<<endl;

    return 0; 
}


