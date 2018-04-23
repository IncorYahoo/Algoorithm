#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1000 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 

bool cmp(int l,int r)
{
	return l>r;
}
int main()
{
  
    FASTIO
	int a[1005];
	int tot,n,ans;
	bool flag;
   	while(cin>>n)
   	{
   		if(n==0)break;
   		tot=0;flag=false;
		for(int i=0;i<n;i++)
		{
			cin>>a[++tot];
		}
		sort(a+1,a+tot+1,cmp);
		if(tot<4) cout<<"no solution"<<endl;
		REP(i,1,tot-3)
		{
			REP(j,i+1,tot-2)REP(k,j+1,tot-1)REP(s,k+1,tot)
			if(a[i]==a[j]+a[k]+a[s])
			{
				flag=true;
				ans=a[i];
			}

		}
		if(flag) cout<<ans<<endl;
	   	else cout<<"no solution"<<endl;
   	}

   

    return 0;
}