#include<bits/stdc++.h>
using namespace std;
typedef long long LL;  
//const int  sz = (int)2e6 + 5; 
LL ma[800400],n,d,t,ans,len;
char c; 

 
void build(LL l ,LL r,LL rt)
{
	ma[rt]=-2147483647;
	if(l==r) return ;
	LL mid = (l+r)>>1; 
	build(l,mid,rt<<1);
	build(mid+1,r,rt<<1|1); 
}
 


void update(LL l,LL r,LL rt,LL len,LL t)
{    
    if(l==r)
	{
		ma[rt]=t;
		return;
	}
	LL mid = (l+r)>>1;
	if(len<=mid) update(l,mid,rt<<1,len,t);
	if(len>mid)  update(mid+1,r,rt<<1|1,len,t);
	ma[rt]=max(ma[rt<<1],ma[rt<<1|1]);
}
LL query(LL L,LL R,LL l,LL r,LL rt)
{
	if(l<=L &&r>=R) return ma[rt];
	LL mid = (L+R)>>1;
	LL  left = 0,right = 0 ;
	if(mid>=l) left = query(L,mid,l,r,rt<<1);
	if(mid<r) right= query(mid+1,R,l,r,rt<<1|1);
	return max(left,right); 
} 

int main()
{
 	 freopen("in","r",stdin);\
     freopen("out","w",stdout); 
	cin>>n>>d;
  	build(1,n,1);
 	for(LL i = 0;i<n;i++)
 	{
 		cin>>c>>t;
 		if(c=='A')
 		{
 			len++;
			update(1,n,1,len,(ans+t)%d);
 		}
 		else 
 		{
 			if(t==0)
 				ans = 0;
 			else 
				ans = query(1,n,len-t+1,len,1);
 			cout<<ans<<endl;
 		}
 	}
    return 0;
}
