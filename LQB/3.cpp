#include <bits/stdc++.h>
using namespace std;
#define INF 0x7f
const int maxn =1e6+6; 
typedef long long ll ;
typedef double    dl ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 int a[maxn];
int n;
int main()
{
	cin>>n;
	f(i,1,n)
		scanf("%d",a+i);
	sort(a+1,a+n+1);
	f(i,1,n)
		printf("%d ",a+i);
}
