#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e4+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int a[maxn] ;
int main()
{
     
    freopen("in","r",stdin);
    bool flag =true;
    int n;
    cin>>n;
    while(n--)
    {
    	memset(a,-1,sizeof(a));
    	int len,m,l,r;
    	cin>>len>>m;
    	f(i,1,m)
    	{
    		cin>>l>>r;
    		if(a[l]==-1)
    			a[l]=1;
    		else
    		{
    			if(a[l]==1)
    			{
    				if(a[r]==1)
    				{
						flag=false;
    					break;
    				}
    				else
    					a[r]=2;

    					
    			}
    			if(a[l]==2)
    			{
					if(a[r]==2)
					{
						flag=false;
    					break;
					}
					else
    					a[r]=1;
    				
    			}
    		} 
    	}
    //	cout<<"111111111111"<<flag<<endl;
 		f(i,1,len)if(a[i]==-1)flag=false; 
		if(flag)  cout<<"Correct"<<endl;
		else   cout<<"Wrong"<<endl;
    }
 
    return 0; 
}

