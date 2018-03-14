#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
char a [500];
int l;

int main()
{
	LOACL
	cin>>a;
	int len = strlen(a);	
	bool flag=true; 
	for(int i=0;i<len;i++)
	{
		if(a[i]=='(')
			l++;
		if(a[i]==')')
			l--;
		if(l<0){
			flag =false;
			break;
		}
	}
	if(flag && l==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
