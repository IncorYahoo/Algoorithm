#include<bits/stdc++.h>
using namespace std;
const int  sz  = 1e5+6 ;
int a,b,c[sz],l,r,mid;
bool jduge(int x )
{
	int k=1,t=1;
	for(int i=1;i<=a;i++)
		if(c[i]-c[k]>=x) ++t, k=i; 
	return t>=b;
}
int main()
{
	freopen("in","r",stdin);
	cin>>a>>b;
	for(int i= 1 ;i<=a;i++) cin>>c[i];
	sort(c+1,c+a+1);
	r = c[a]-c[1];	
	while(l<=r)
	{
		int mid = (l+r)>>1;
		if(jduge(mid)==1) l=mid+1;
		else r=mid-1;
	}
	cout<<r<<endl;
}
