#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 

int main()
{
	LOACL
	int arr[]={123,45,15,151,351,23145,343,} ;
	vector<int> v;
	f(i,0,sizeof(arr)/sizeof(arr[0])-1)
		v.push_back(arr[i]);
	make_heap(v.begin(),v.end());
	
	cout<<v.front()<<endl;

	pop_heap(v.begin(),v.end()); v.pop_back();

	v.push_back(4444444);
	push_heap(v.begin(),v.end());
	cout<<v.front()<<endl;

	sort_heap (v.begin(),v.end());
	cout<<v.front()<<endl;
	sort_heap (v.begin(),v.end());
	cout<<v.front()<<endl;
 


	return 0;
}
