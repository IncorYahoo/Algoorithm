#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ll; 
 
ll n ;
bool pp(ll n)
{
	ll tmp = 0;
	while(n!=0)
	{
		tmp+=(n%10)*(n%10);
		n/=10;
	}
	if(tmp==1)return true;
	if(tmp >=10) return pp(tmp);
	else return false;	
}

int main()
{
    
    freopen("in","r",stdin);\
         freopen("out","w",stdout); 
    while(cin>>n)
    {
    	if(pp(n))
    	{
    		cout<<"true"<<endl;
    	}
    	else cout<<"false"<<endl;
    }
 
    return 0;
}
