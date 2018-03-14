#include <iostream>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
//#include <cfenv>
//#include <cinttypes>
//#include <cstdbool>
#include <cstdint>
//#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <deque>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <array>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
using namespace std;
#define INF 0x7f7f7f7f
const int N =1001; 
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
struct edge{
	int u,v,w;
};
edge e[N];
int f[N];
int n,m ,sum=0,count1=0;
bool cmp(edge l ,edge r)
{
	return l.w<r.w;
}
int getf(int v)
{
	if(f[v]==v)
		return v;
	else
	{  
		f[v]=getf(f[v]);
		return f[v] ;
	}
}   //Â·¾¶Ñ¹Ëõ
int merge(int l,int r)
{
	int t1 = getf(l);
	int t2 = getf(r); 
	if(t1!=t2)      
	{
		f[t2]=t1;
		return 1;
	}
	return 0;
}

int main()
{
	int money ;
	cin>>money>>n>>m;
	f(i,1,n)
		cin>>e[i].u>>e[i].v>>e[i].w;
	sort(e,e+n+1,cmp);
	f(i,1,m)f[i]=i;
	f(i,1,n)
	{
		if(merge(e[i].u,e[i].v))
		{
			sum+=e[i].w;count1++;
		}
		if(count1==m-1)break; 
	}
	if(sum <= money)cout<<"Yes";
	else cout<<"No";
	return 0;

}