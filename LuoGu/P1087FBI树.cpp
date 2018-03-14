#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 
typedef long long ll; 
int n;
char s [(1<<10+1)];
void maketree(int l,int r)
{
/*	if(l>r) return ;
	int m = (l+r)>>1;
	maketree(l,m);
	maketree(m+1,r);
	*/
	if(r>l)
	{
		maketree(l,(l+r)>>1);
		maketree((l+r+1)>>1,r) ;
	}
	//全“0”串称为B串，全“1”串称为I串，既含“0”又含“1”的串则称为F串。
	//cout<<l<<" "<<r<<endl;
  	int f = 1,b=1;
	for(int i=l;i<=r;i++)
	{
		if(s[i]=='1')
			b=0;
		if(s[i]=='0')
			f=0;
	}
	if(f==1)
	cout<<'I';
	else if(b==1)
			cout<<'B';
	else cout<<'F';  
 
}
int main()
{
	LOACL
	cin>>n>>s;
 	maketree(0,(1<<n)-1);
	return 0;
}