#include <cstdio>
#include <iostream> 
using namespace std;
#define INF 0x7f
const int maxn =1e5+6; 
typedef long long ll ;
typedef double    dl ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
ll stack[maxn],s[maxn];
int index,op,n;
dl dd;
int l,r,x;
int main()
{
     cin>>n;
     while(n--)
     {
        cin>>op;
        if(op==1)
        {
 
            cin>>x;
			stack[++index]=x;
            s[index]=s[index-1]+x;

            if(index==1)
                continue;
            l =1;r=index-1;
            while(l!=r)
            {
                int mid = (l+r)>>1;
                if(s[mid]+x > 1ll*(mid+1)* stack[mid+1])
					l=mid+1;
                else r=mid;
            }
            dd =max(dd,(dl)x-(dl)(s[l]+x)/(dl)(l+1));

        }
        else printf("%.15lf\n",dd);
     }





    return 0;

}
