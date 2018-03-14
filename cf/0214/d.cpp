#include<iostream>
using namespace std;
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;i++)
#define g(i,l,r) for(int i=l;i>=r;i--)
const int maxn = 1e5+5 ;
ll p,k,a[maxn],cnt;


ll md()
{
	return (p%k+k)%k;
}


int main()
{
	cin>>p>>k;
	while(p)
	{
		a[++cnt] = md();
		p-=a[cnt];
		p/=-k;
	}
	cout<<cnt<<endl;
	f(i,1,cnt)
		cout<<a[i]<<" "; 

}