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
typedef long long ll; 
const int    sz = 100005;
ll n,m,p,op,x,y,val;
ll a[sz],sum[sz<<2],addv[sz<<2],mulv[sz<<2];
void build(ll l,ll r,ll rt)
{
	 
	mulv[rt]=1;
	addv[rt]=0;
	if(l==r)
	{
		sum[rt]=a[l]; 
		return;
	}
	ll mid = (l+r)>>1;
	build(l,mid,rt<<1);
	build(mid+1,r,rt<<1|1);
	sum[rt] = (sum[rt<<1]+sum[rt<<1|1] )%p;
 
}
 
void push_down(ll l ,ll r ,ll rt)
{
	ll mid  = l+r>>1;
	 
 	mulv[rt<<1] = (mulv[rt<<1]*mulv[rt])%p; 
	mulv[rt<<1|1] = (mulv[rt<<1|1]*mulv[rt])%p; 
	addv[rt<<1] = (addv[rt<<1]*mulv[rt])%p; 
	addv[rt<<1|1] = (addv[rt<<1|1]*mulv[rt])%p; 
	sum[rt<<1] = (sum[rt<<1]*mulv[rt])%p; 
	sum[rt<<1|1] = (sum[rt<<1|1]*mulv[rt])%p; 
	mulv[rt]=1;
	addv[rt<<1] = (addv[rt<<1]+addv[rt])%p; 
	addv[rt<<1|1] = (addv[rt<<1|1]+addv[rt])%p; 
	sum[rt<<1]=(sum[rt<<1]+(mid-l+1)*addv[rt])%p;
	sum[rt<<1|1]=(sum[rt<<1|1]+(r-mid)*addv[rt])%p;

 	addv[rt]=0; 	
 
}
void mul (ll l ,ll r,ll ql,ll qr,ll rt,ll val)
{
	if(ql<=l&&qr>=r)
	{
		mulv[rt]= ( mulv[rt]*val)%p ;
		sum[rt] = (sum[rt]*val)%p;
		addv[rt] = (addv[rt]*val)%p;
		return ;
	}
	ll mid = l+r>>1;
	if(mulv[rt]!=1||addv[rt])
	 	push_down(l,r,rt);
	if(ql<=mid) mul(l,mid,ql,qr,rt<<1,val);
	if(qr>mid) mul(mid+1,r,ql,qr,rt<<1|1,val); 
	sum[rt] = (sum[rt<<1]+sum[rt<<1|1] )%p;
}
void add (ll l ,ll r,ll ql,ll qr,ll rt,ll val)
{
	if(ql<=l&&qr>=r)
	{
		sum[rt] = (sum[rt]+val*(r-l+1))%p;
		addv[rt] = (addv[rt]+val)%p;
		return ;
	}
	ll mid = (l+r)>>1;
	if(mulv[rt]!=1||addv[rt])
	 	push_down(l,r,rt);
	 
	if(ql<=mid) add(l,mid,ql,qr,rt<<1,val);
	if(qr>mid) add(mid+1,r,ql,qr,rt<<1|1,val); 
	sum[rt] = (sum[rt<<1]+sum[rt<<1|1] )%p;
}

ll query (ll l ,ll r,ll ql,ll qr,ll rt )
{
	if(ql<=l&&qr>=r)
		return sum[rt]%p; 
	ll mid = l+r>>1;
	if(mulv[rt]!=1||addv[rt]) push_down(l,r,rt);
	ll ans =0;
	if(ql<=mid )ans+= query(l,mid,ql,qr,rt<<1);
	if(qr>mid) ans+= query(mid+1,r,ql,qr,rt<<1|1);
	return ans%p; 
}
int main()
{
    LOACL
 	cin>>n>>m>>p;
 	REP(i,1,n) cin>>a[i];
 	build(1,n,1);
 	REP(i,1,m)
 	{
 		cin>>op>>x>>y;
 		if(op==1)
 		{
 			cin>>val;
 			mul(1,n,x,y,1,val);
 		}
 		else if(op==2)
 		{
 			cin>>val;
 			add(1,n,x,y,1,val);
 		}
 		else
 		{
 			cout<<query(1,n,x,y,1)<<endl;
 		}
 	}
    return 0;
}