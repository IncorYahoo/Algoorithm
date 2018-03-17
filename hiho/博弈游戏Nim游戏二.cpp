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

int main()
{
	LOACL
 	int n ;
 	cin>>n;
 	getchar(); //吃换行
 	char c;
 	int ans=0;
 	f(i,1,n)
 	{
 		c=getchar();
 		if(c=='H')
 			ans^=i;
 	}
 	if(ans)cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
	return 0;
}