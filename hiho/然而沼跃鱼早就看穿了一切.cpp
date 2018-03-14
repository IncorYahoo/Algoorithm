#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 
int main()
{
     
    freopen("in","r",stdin);
    string str ;
    string t ;
    string tar = "marshtomp";
    string des = "fjxmlhx" ;
 	while(getline(cin,str))
 	{
 		t=str;
 		transform(t.begin(),t.end(),t.begin(),::tolower);
 		int pos = t.find(tar);
 		while(pos!=-1)
 		{
 			str.replace(pos,tar.length(),des);
 			t.replace(pos,tar.length(),des);
 			 pos = t.find(tar);
 		}
		cout<<str<<endl; 
 	} 
    return 0; 
}

