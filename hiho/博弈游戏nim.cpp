#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
int n,x,s;
int main()
{
	LOACL
	cin>>n;
	f(i,1,n) 
	{
		cin>>x;	 
		s^=x;
	} 
	if(s)cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
	return 0;
}
