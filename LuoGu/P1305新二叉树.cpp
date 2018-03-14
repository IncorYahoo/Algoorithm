#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
struct tree{
	char c;
	struct tree *l,*r;
};
char a[100],b[100],c[100];
	int n ;
void ss(char ch)
{
	if(ch=='*')return ; 
	for(int i=1;i<=n;i++)
	{
		if(a[i]==ch)
		{
			cout<<a[i];
			ss(b[i]);
			ss(c[i]);
			return ;
		}
	}
}
int main()
{
	LOACL



	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>c[i];
	 ss(a[1]);

	return 0;
}
