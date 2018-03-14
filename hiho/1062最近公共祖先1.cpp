#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
int n,m;
map<string, string> fa;
string s1,s2;
set<string> s ;
void slove()
{
	s.clear();
	while(fa.count(s1))
	{
		s.insert(s1);
		s1=fa[s1];
	}
	s.insert(s1);

	if(s.find(s2)!=s.end())
	{
		cout<<s2<<endl;;
		return;
	}
	bool flag=true;

	while(fa.count(s2))
	{
		s2=fa[s2];
		if(s.find(s2)!=s.end())
		{
			flag=false;
			cout<<s2<<endl;
			break;
		}
	}
	if(flag) cout<<-1<<endl;


}
int main()
{
	LOACL
	cin>>n;
	f(i,1,n)
	{
		cin>>s1>>s2;
		fa[s2] =s1;
	}
	cin>>m;
	f(i,1,m)
	{
		cin>>s1>>s2;
		slove();
	}
	return 0;
}