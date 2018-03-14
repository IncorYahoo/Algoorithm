#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

#define inf = 987654321;
#define sz = 1e6 + 5;
#define mod = 1e9 + 7;
#define sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 
ll t,k,d,s,e;
void work()
{
    cin>>t>>k>>d;
    if(t%k==0)cout<<d<<endl;
	else
	{
		 if(k<t)k=(t/k+1)*k;
		 dl cookp = (k-t)/2.0 +t; 
		 dl periods = floor(d/cookp);
		 dl rest = d - (periods*cookp);
		 dl time = periods * k;
		 if(rest <=t)
		 	time+=rest;
		 else
		 {
		 	time+=t;
		 	time += (rest-t)*2;
		 }
 		printf("%.10f\n",time);
	}
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
   
    return 0; 
}