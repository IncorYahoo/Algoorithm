#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 

const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=(int)l;i<=(int)r;++i)
#define g(i,l,r) for(int i=(int)l;i>=(int)r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
const int N = 505;
const int M = 305;

int n,ans;
char a[N][M];
int  len[N];
int main()
{
    LOACL
    cin>>n;
    f(i,1,n) 
    {
    	cin>>a[i];
    	len[i]=strlen(a[i])-1;
    }

 //	f(i,1,n) cout<<len[i]<<endl;

    f(i,1,n-1)
    {
    	f(j,i+1,n)
    	{
    		 
    			int s1=0,s2=0;
    			int e1=len[i],e2=len[j];

		 
				while(s1<=e1&&e2>=s2&&a[i][s1]==a[j][e2])
				s1++,e2--;
				if(s1>e1)
				{
					while(a[j][s2] ==a[j][e2])
						s2++,e2--;
					if(s2>=e2) ans+=2;
				}
				else if( e2<s1)
				{
					while(a[i][s1] ==a[i][e1])
						s1++,e1--;
					if(s1>=e1) ans+=2;
				}
				else continue;  
    	}
    }
    cout<<ans<<endl;

    return 0;
}
