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
ll n ,k,x,y,p=1,s=1,ans;
ll a[sz],nf,g[110] ;
void work(ll s)
{
	if(s>inf) return ;
	ll t1= s*10+4;
	ll t2 = s*10+7;
	a[++nf]=t1;a[++nf]=t2;
	work(t1);
	work(t2);
}
 
void get1(long long d,long long x,long long y,long long z){
    d--;
    bool p[20];
    for (int i=1;i<=z;i++) p[i]=true;
    for (int i=1;i<=z;i++){
        int j=d/(x/y);
        x/=y;d%=x;y--;
        if (i==z){for (int k=1;k<=z;k++) if (p[k]) g[i]=k;}
        else{for (int k=1,s=0;k<=z;k++){if (p[k]) s++;if (s-1==j){p[k]=false;g[i]=k;break;}}}
    }
}
void get(ll d,ll x,ll y,ll z)
{
	d--;bool p[20];
	CLR(p,1);
	f(i,1,z)
	{
		int j = d/(x/y);
		x/=y;
		d%=x;y--;
		if(i==z)
		{
			f(k,1,z)
			{
				if(p[k])
					g[i]=k;
			}
		}
		else
		{
			int s =0;
			f(k,1,z)
			{
				if(p[k]) s++;
				if(s-1==j)
				{
					p[k]=false;
					g[i]=k;
					break;
				}
			}
		}
 
	}
}
bool pan(long long x){
    while (x){
        if (x%10!=7&&x%10!=4) return false;
        x/=10;
    }
    return true;
}
int main()
{
	LOACL
	cin>>n>>k;
	work(0);sort(a+1,a+nf+1);
	while(p<k)++s,p*=s;
	if(s>n){cout<<-1<<endl;return 0;}
	for (long long i=1;i<=nf;i++)if(a[i]<=n-s) ans++;
	get(k,p,s,s);
//f(i,1,100) cout<<g[i]<<" ";cout<<endl;
 	for (long long i=1;i<=s;i++) if (pan(i+n-s)&&pan(g[i]+n-s)) ans++;
    cout<<ans<<endl;
	return 0;
}
