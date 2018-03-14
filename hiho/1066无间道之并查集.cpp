
#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
int n ,op,cnt;
int pa[100005];
map<string,int > m ;
string s,t;
int getf(int x)
{
	if(x!=pa[x])
		pa[x]=getf(pa[x]);
	return pa[x];
}
 void uni(string s,string t)
 {
 	int x = getf(m[s]);
 	int y= getf(m[t]);
 	if(x!=y)pa[x]=y; 
 }
 void query(string s,string t)
 {
 	int x = getf(m[s]);
 	int y= getf(m[t]);
 	if(x==y)cout<<"yes\n";
 	else  cout<<  "no\n";
 }
int main()
{
	LOACL
	cin>>n;
	f(i,1,n)  pa[i]=i;
	f(i,1,n)
	{
		cin>>op>>s>>t;
		if(!m.count(s)) m[s]=++cnt;
		if(!m.count(t)) m[t]=++cnt;
		if(op==0)uni(s,t );
		else query( s,t);
	}	 
	return 0;
}