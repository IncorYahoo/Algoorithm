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
int a[sz],t[sz];
ll n,sum;
 
void merge_func(int s1,int e1,int s2,int  e2)
{
	int p=s1,p1=s1,p2=s2;
	while(p1<=e1&&p2<=e2)
	{
		if(a[p1]<=a[p2]) t[p++]=a[p1++];
		else t[p++]=a[p2++],sum+=(e1-p1+1); 
	}
	while(p1<=e1) t[p++]=a[p1++];  
    while(p2<=e2)  t[p++]=a[p2++]; 
    f(i,s1,e2) a[i]=t[i]; 
}
void merge(ll l,ll r)
{
	if(l<r)
	{
		ll mid =(l+r)>>1;
		merge(l,mid);
		merge(mid+1,r);
		merge_func(l,mid,mid+1,r);
	} 
}
int main()
{
     
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cin>>n;
    f(i,1,n)cin>>a[i]; 
    merge(1,n);
    cout<<sum<<endl;
    
    return 0; 
}

