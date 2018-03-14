#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
 string str ;


bool check(vector<char>a){  
    int i=0;  
    for(;i+1<a.size();i++){  
        if(a[i]==a[i+1])  
             return true;  
    }  
    return false;  
}  
   
vector <char> change(vector <char> a)
{  
	 
	f(i,0,a.size()-2)
	{
		if(a[i]==a[i+1])
		{
			char c = a[i]; 
			f(j,i,a.size()-1)
			{
				if(a[j]!=c)
				{
					i=j-1;
					break;
				}
				else
				a[j]='T';
			} 
		}
	} 
    return a;  
}  
  
vector<char>delet_T(vector<char>a){  
    int i;  
    vector<char>b;  
    f(i,0,a.size()-1)
        if(a[i]!='T')  
            b.push_back(a[i]);   
    return b;  
}  


int count(string str)
{  
    vector<char>a;  
    int len = str.size(); 
    int i;  
    for(i=0;i<str.size();i++) 
        a.push_back(str[i]);     
    do{  
        a=change(a);  
        a=delet_T(a);  
    }while(check(a));  
    return len-a.size();  
}  
void sumstr()
{
	int sum= 0;
	f(i,0,str.size()-1)
	{
		string str1 = str,str2=str,str3 =str;
		int sum1 = count(str1.insert(i,"A"));
		int sum2 = count(str2.insert(i,"B"));
		int sum3 = count(str3.insert(i,"C"));
		sum1 =max(max(sum2,sum3),sum1); 
		if(sum1>sum)
			sum=sum1;
	}
	cout<<sum<<endl;

}
int main()
{
     
    freopen("in","r",stdin);
    int n;
    cin>>n;
    while(n--)
    {
    	cin>>str;
    	sumstr();
    }
   
    return 0; 
}
