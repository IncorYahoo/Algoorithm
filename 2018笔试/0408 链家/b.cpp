#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
         freopen("out","w",stdout); 
#define FASTIO  ios::sync_with_stdio(false);
#define CLOCK cout<<1.*clock()/CLOCKS_PER_SEC<<"ms"<<"\n";


const int   inf = 987654321;
const int    sz = (int)1e6 + 5;
const int   mod = (int)1e9 + 7;
const int sqrtn = 300; 

//#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
#define DBG(x) cout<<(#x)<<"="<<x<<endl
#define DBG2(x,y) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<endl
#define DBG3(x,y,z) cout<<(#x)<<"="<<x<<"\t"<<(#y)<<"="<<y<<"\t"<<(#z)<<"="<<z<<endl

#define FOR(i, a, b)  for(int i=(a); i<(b); i++)
#define REP(i, a, b)  for(int i=(a); i<=(b); i++)
#define DOWN(i, a, b) for(int i=(a); i>=(b); i--)


#define all(x) x.begin(),x.end()
#define low(x) (x)&(-x)
#define pb push_back
typedef long long ll; 
typedef double dl; 
 
//这个题目给了数据范围 
//所以打了一个斐波利亚数列表
int fib[25]={ 1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393};

int main()
{
   
/*
	创建数列
    int n=0;
	fib[1]=fib[2]=1;
	REP(i,3,30)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	REP(i,3,30) cout<<fib[i]<<",";
*/	 
    int n,ans=0;
    while(cin>>n)
    {
    	for(int i = 0;i<=24;i++)
    	{
    		if(fib[i]>n)break;
    		ans =i;  
    	}
    	if(n==0) ans=0;
    	else ans++;
	    cout<<n-ans<<endl;	  
    } 
    return 0;
}