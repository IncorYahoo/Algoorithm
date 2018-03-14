#include<iostream>
#include<string>
using namespace std;
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
string str;

int main()
{
	cin>>str;
	int n =str.length();	
	f(i,0,n/2)
	{
		if(str[i]!=str[n-i-1])
		{
			str.insert(n-i,str,i,1)   ;
			n++;
		}
	} 
	cout<<str<<endl;
	return 0;

}