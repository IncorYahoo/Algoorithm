#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)

const int N = 100005;

typedef long long ll; 
typedef double dl; 
ll n ,m,op,l,r,t,P;
ll a[N],sum[N<<2],addv[N<<2],mulv[N<<2];

void push_up(ll rt)
{
	sum[rt]=( sum[rt<<1]+sum[rt<<1|1])%P;
}
void push_down(ll l ,ll r,ll rt)
{
	ll mid = l+r>>1;
	mulv[rt<<1] =(mulv[rt<<1]*mulv[rt])%P;
	mulv[rt<<1|1] =(mulv[rt<<1|1]*mulv[rt])%P;
	
	addv[rt<<1] =(addv[rt<<1]*mulv[rt])%P;
	addv[rt<<1|1] =(addv[rt<<1|1]*mulv[rt])%P;

	sum[rt<<1] =(sum[rt<<1]*mulv[rt])%P;
	sum[rt<<1|1] =(sum[rt<<1|1]*mulv[rt])%P;
	
	mulv[rt]=1;
	addv[rt<<1] = (addv[rt<<1]+addv[rt])%P;
	addv[rt<<1|1] =(addv[rt<<1|1] +addv[rt])%P;
	sum[rt<<1] = (sum[rt<<1] + (mid-l+1)*addv[rt])%P;
	sum[rt<<1|1] = (sum[rt<<1|1] + (r-mid)*addv[rt])%P;
	addv[rt]=0;

}
 
void build(ll l ,ll r,ll rt)
{
	addv[rt]= 0;
	mulv[rt] = 1;
	if(l==r)
	{
		sum[rt]=a[l];
		return ;
	}
	ll mid = l+r>>1;
	build(l,mid,rt<<1);
	build(mid+1,r,rt<<1|1); 
	push_up(rt); 
}

void mul(ll l ,ll r ,ll x,ll y ,ll t,ll rt)
{
	if(x<=l && y>=r)
	{
		sum[rt] = sum[rt] *t%P;
		addv[rt] = addv[rt] *t%P;
		mulv[rt] = mulv[rt] *t%P;
		return ;
	}
	
	ll mid = l+r>>1;
	if(mulv[rt]!=1 || addv[rt])
	{
		push_down(l,r,rt);
	} 
	if(x<=mid) mul(l,mid,x,y,t,rt<<1);
	if(y>mid) mul(mid+1,r,x,y,t,rt<<1|1);  
	push_up(rt);
}
void add(ll l ,ll r,ll x,ll y,ll t,ll rt)
{
	if(x<=l && y>=r)
	{
		sum[rt] = (sum[rt]+t*(r-l+1) )%P;
		addv[rt] = (addv[rt]+t )%P;
		return ;
	}
	ll mid = l+r>>1;
	if(mulv[rt]!=1 || addv[rt])
	{
		push_down(l,r,rt);
	} 
	if(x<=mid) add(l,mid,x,y,t,rt<<1);
	if(y>mid) add(mid+1,r,x,y,t,rt<<1|1);  
	push_up(rt); 
}
ll query(ll l ,ll r ,ll x ,ll y,ll rt)
{
	if(x<= l && y>=r) return sum[rt];
	ll mid = l+r>>1;
	if(mulv[rt]!=1 || addv[rt])
	{
		push_down(l,r,rt);
	} 
	ll ans = 0;
	if(x<=mid) ans += query(l,mid,x,y,rt<<1);
	if(y>mid) ans += query(mid+1,r,x,y,rt<<1|1);
	return ans % P ;

}
int main()
{
  //  LOACL
    cin>>n>>P;
 	REP(i,1,n) cin>>a[i];
 	
  	build(1,n,1);
  	cin>>m;
 	REP(i,1,m)
 	{
 		cin>>op>>l>>r;
 		if(op==1)
 		{
 			cin>>t;
 	 		mul(1,n,l,r,t,1);
 		}
 		else if(op==2)
 		{
 			cin>>t;
 	 		add(1,n,l,r,t,1);
 		}
 		else 
 		{
 	 		cout<<query(1,n,l,r,1)<<endl;
 		}
 	}
 

    return 0;
}
