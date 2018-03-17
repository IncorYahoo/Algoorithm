#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 

int main()
{
	LOACL
	 string s;
 
    int n,k;
    cin>>n>>k>>s;
    for(int i=0;i<n-1;i++)
    {
        if(k<=0)break;
        if(s[i]=='4'&&s[i+1]=='7')
        {
            k--;
            if(i&1)
            {
                s[i]='7';
                if(i>=1&&s[i-1]=='4')
                {
                    if(k&1)s[i]='4';
                    cout<<s<<"\n";
                    return 0;
                }
            }
            else
            {
                s[i+1]='4';
                if(i+2<s.size()&&s[i+2]=='7')
                {
                    if(k&1)s[i+1]='7';
                    cout<<s<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<s<<"\n";
  
	return 0;
}