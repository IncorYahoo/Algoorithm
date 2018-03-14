
#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 

void ss(string pre,string mid )
{
	if(pre.size()>0)
	{
		char ch = mid[mid.size()-1];
		cout<<ch;
		int k  = pre.find(ch);
		ss(pre.substr(0,k),mid.substr(0,k));
		ss(pre.substr(k+1),mid.substr(k,pre.size()-k-1));
	}
}
int main()
{
	LOACL
	string pre,mid;
	cin>>pre>>mid;
	ss(pre,mid);

	return 0;
}
