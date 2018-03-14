#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
int main()
{
     
    freopen("in","r",stdin);
    int n,n1,n2,n3 ;
    int a[4];
    cin>>n;

    f(i,1,3) cin>>a[i];
   	sort(a+1,a+4);

   	//    f(i,1,3) cout<<a[i];
   	n=n/100*(100-a[3]); 
 
	n=n*(100-a[2])/100; 
 
	n=n*(100-a[1])/100; 
	 
 
    cout<<n<<endl;
   
    return 0; 
}

