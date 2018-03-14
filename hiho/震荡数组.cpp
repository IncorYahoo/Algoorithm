#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =50; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
int a[maxn]; 
int main()
{
     
    freopen("in","r",stdin);
    int n;
    f(i,1,n)
    cin>>a[i];
    int s =1;
    int ans1=0,ans2=0;
    f(i,1,n-1)
    {
    	if(s*a[i]>a[i+1])
    	{
    		ans1++;
    		s=-s;
    	}
    }
	f(i,1,n-1)
    {
    	if(s*a[i]<a[i+1])
    	{
    		ans2++;
    		s=-s;
    	}
    }


    cout<<min(n-ans1-1,n-ans2-1)<<endl;

    return 0; 
}


