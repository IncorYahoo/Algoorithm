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

int n;
int a[sz],b[sz];

int main()
{
     LOACL
    cin>>n;
    f(i,1,n)cin>>a[i];

//    f(i,1,n)cout<<a[i]; cout<<endl;
    
    int k=1,s=0;
    f(i,2,n)
    {
    	if(a[i]!=a[i-1])
    	{
    		b[++s]=k;
    		k=1;
    	
    	}
    	else k++;
    }

    b[++s]=k;
    //	cout<<s<<"        "<<b[s]<<endl;
 //   f(i,1,s) cout<<i<<"      "<<b[i]<<endl;
    bool flag =true;
    f(i,2,s)
    	if(b[i]!=b[i-1])flag=false;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
 }