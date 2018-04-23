#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
 

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)
 
#define ls(x) x<<1
#define rs(x) x<<1|1
 
typedef unsigned long long ll; 
typedef double dl; 
const int sz = 1000003;
ll n,m,op,x,y,val;
ll tag[sz<<2],ans[sz<<2],a[sz];
void build(ll l,ll r,ll rt)
{
	tag[rt]=0;
	if(l==r)
	{
		ans[rt]=a[l];
		return ;
	}
	ll mid =l+r>>1;
	build(l,mid,ls(rt));
	build(mid+1,r,rs(rt));
	ans[rt]=ans[ls(rt)]+ans[rs(rt)];
}
void pb(ll l,ll r,ll rt)
{
	ll mid =l+r>>1;
	tag[rt<<1] =tag[rt<<1]+tag[rt];
	ans[rt<<1]=ans[rt<<1]+tag[rt]*(mid-l+1);
	tag[rt<<1|1] =tag[rt<<1|1]+tag[rt];
	ans[rt<<1|1]=ans[rt<<1|1]+tag[rt]*(r-mid);
	tag[rt]=0;
}
void add(ll l,ll r,ll ql,ll qr,ll rt,ll val)
{
	if(ql<=l&& qr>=r)
	{
		ans[rt]+=val*(r-l+1);
		tag[rt]+=val;
		return;
	}
	pb(l,r,rt);
	ll mid =(l+r)>>1;
	if(ql<=mid)add(l,mid,ql,qr,ls(rt),val);
	if(qr>mid)add(mid+1,r,ql,qr,rs(rt),val);
	ans[rt]=ans[ls(rt)]+ans[rs(rt)]; 
 
}
 
 

ll query(ll l,ll r,ll ql,ll qr,ll rt)
{
	if(ql<=l&&qr>=r)
	{
		return ans[rt];
	}
	ll ans =0;
	pb(l,r,rt);
	ll mid =l+r>>1;
	if(ql<=mid) ans+=query(l,mid,ql,qr,ls(rt));
	if(qr>mid) ans+=query(mid+1,r,ql,qr,rs(rt));
	return ans;
}
int main()
{
    LOACL
	cin>>n>>m;
	REP(i,1,n)cin>>a[i];
	build(1,n,1);
 	
	REP(i,1,m)
	{
		cin>>op>>x>>y;
		if(op==1)
		{
			cin>>val;
			add(1,n,x,y,1,val);
			//update(x,y,1,n,1,val);
		}
		else
		{
			cout<<query(1,n,x,y,1)<<endl;
		}
	}     
 


    return 0;
}
