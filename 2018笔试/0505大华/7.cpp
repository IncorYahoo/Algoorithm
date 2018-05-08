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
class Solution {
public:
	 
	int lengthOfLongestSubstring(string s) {
		// write your code here
		int ret = 0;
		map<char, int > m;
		int start = 1;
		for (int i = 1; i <= s.length(); i++)
		{
			char c = s[i - 1];
			if (m[c] >= start)
			{
				start = m[c] + 1;
				m[c] = i;

			}
			else
			{
				m[c] = i;
				ret = max(ret, i - start + 1);
			}

		}
		return ret;
	}
};


int main()
{
   // LOACL
    Solution s;
    int n;string str;
    cin>>n;
    while(n--)
    {
    	cin>>str;
    	cout<<s.lengthOfLongestSubstring(str)<<endl;
    }
   
    return 0;
}