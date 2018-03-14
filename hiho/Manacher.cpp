#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e7+5; 

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
char str[maxn],s[maxn<<1];
int p[maxn<<1];
void manacher()
{
	memset(p,0,sizeof(p));
	int n = strlen(str);
	int l = -1;
	f(i,0,n-1)s[++l]='#',s[++l]=str[i];
	s[++l]='#';
	//f(i,0,l)cout<<s[i]<<" ";cout<<endl;

 	int ans=0; 
 	int mx=-1,id=0;
	f(i,1,l-1)
	{
		if(id+mx>i)
			p[i]=min(p[id*2-i],id+mx-i);
		while(i-p[i]-1>=0 &&  i+p[i]+1<=l && s[i-p[i]-1]== s[i+p[i]+1])
			p[i]++;
		if(id+mx < i+p[i])
			id=i,mx=p[i];
		ans=max(ans,p[i]); 
	}   
 	cout<<ans<<endl;

 
}
int main()
{
     
    freopen("in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
    	cin>>str;
    	 manacher();

    }

 

    return 0; 
}

