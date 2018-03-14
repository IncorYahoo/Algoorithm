#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
#define pb push_back
int n,m,x;
int a [10005];
stack<int>  b ;
vector<int> s;
int main()
{
	LOACL
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int t=1;bool flag =true;
	for(int i=1;i<=n;i++)	
	{ 
		if(!b.empty() && b.top()== a[t])
		{
			s.pb(0);
			 
				b.pop();
				t++;
		}
		if(i==a[t])
		{
			s.pb(1);s.pb(0);
			//cout<<"push"<<endl<<"pop"<<endl;
			t++;
		}	 
		else 
		{
			s.pb(1);
			if(b.size()>m)
			{
				flag =false;break;
			}	
		//	cout<<"push"<<endl;
			b.push(i);
		}
	}
	if(!flag)
	{
		cout<<"震惊！昨天小汤河火车站竟然。。。";
		return 0;
	} 
	while(!b.empty() && b.top()== a[t])
	{
		s.pb(0);
	//	cout<<"pop"<<endl;
		b.pop();
		t++;
	}
	if(t<n+1) 
	{
		cout<<"震惊！昨天小汤河火车站竟然。。。";
		return 0;
	} 
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==1)
			cout<<"push"<<endl;
		else 	cout<<"pop"<<endl;
	}
	return 0;
}