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

 
 int a[sz], b[sz];
 int n,l,r,m;
 int main()
 {
 	LOACL
 	while(cin>>a[++n]);
 	n--;
 	//1　＿＿＿＿＿＿ n
 	int ans = 0;
 	b[0]=inf;
 	f(i,1,n)
 	{
 		if(b[ans]>=a[i])
 		{
 			b[ans+1]=a[i];
 			ans++;
 		}
 		else 
 		{
 			l=0;r=ans;
 			while(l<r)
 			{
 				m=(l+r)>>1;
 				if(b[m]>=a[i]) l=m+1;
 				else r=m;
 			}
 			if(l!=0)b[l]=a[i];
 		} 
 	}
 	cout<<ans<<endl;
 	CLR(b,-1);
 	ans=0;
 	f(i,1,n)
 	{
 		if(b[ans]<a[i])
 		{
 			b[ans+1]=a[i];
 			ans++;
 		}
 		else 
 		{
 			l=0,r=ans;
 			while(l<r)
 			{
 				m=(l+r)>>1;
 				if(b[m]>=a[i])r=m;
 				else l= m+1;
 			}
 			if(l!=0)
 			b[l]=a[i];
 		}
 	}
 	cout<<ans<<endl;
 	return 0;
 }
