#include<bits/stdc++.h>
using namespace std;
 
int n,k,x;
set<int> s;  
int main()
{ 
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>k;
        for(int j=1;j<=k;j++)
        {
            cin>>x;
            s.insert(x);
        }

    }
    cout<<s.size()<<endl;

    return 0;
}