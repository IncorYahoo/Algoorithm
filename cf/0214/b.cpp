#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define f(i,l,r) for(int i=l;i<=r;i++)
#define g(i,l,r) for(int i=l;i>=r;i--)
 //888888888888888888 18* 2  === 36

int main()
{
	int n;
	cin>>n;
	if(n>36)cout<<-1<<endl;
	else
	{
		if(n%2==1) cout<<1;
		f(i,1,n/2) cout<<8;
		cout<<endl;
	}
	return 0;
}