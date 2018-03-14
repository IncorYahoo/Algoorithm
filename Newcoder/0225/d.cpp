#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
int n,a,b;
int p[sz],fa[sz];
map<int,int> m;

 
int Find(int x)
{
	int r=x,t;
	while(r!=fa[r])r=fa[r];
	while(x!=r)
	{
		t=fa[x];
		fa[x]=r;
		x=t;
	}
	return r;
}
 
  
void Union(int u,int v){
    int uu=Find(u);
    int vv=Find(v);
    if(uu!=vv)  fa[uu]=vv; 
}
void work()
{
    cin>>n>>a>>b;
    int mm=0;
    f(i,1,n)
    {
    	cin>>p[i];
     	m[p[i]]=i;
     	mm = max(mm,p[i]);
     } 
    if(mm >max(a,b))
    {
		cout<<"NO"<<endl;
    	return ;
    } 
    f(i,0,n+1)fa[i]=i;
    f(i,1,n)
    {
    	if(m[a-p[i]])Union(i,m[a-p[i]]);
    	else Union(i,n+1);
    	if(m[b-p[i]])Union(i,m[b-p[i]]);
    	else Union(i,0); 
    }
    int A =Find(0);
    int B = Find(n+1);
    if(A!=B)
    {
    	cout<<"YES"<<endl;
    	f(i,1,n)
    	{
    		if(i!=1) cout<<" ";
    		if(Find(i)==A)cout<<0;
    		else cout<<1; 
    	} 
    }
    else cout<<"NO"<<endl;
    return ;
    
}
int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    
    return 0; 
}


