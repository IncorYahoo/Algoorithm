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
	int n,m;
	 cin>>n>>m ;
	
		if(abs(n-m)<=1)
		{

			if(n>m)
			{
				cout<<'0';
				f(i,1,m)cout<<'1'<<'0';
			}	
			else if(n<m){
				 cout<<'1';
				 f(i,1,n)cout<<'0'<<'1';
			}
			else {
				f(i,1,m)cout<<'0'<<'1';
			}

		}
		else cout<<"No"<<endl;
	 
	return 0;
}