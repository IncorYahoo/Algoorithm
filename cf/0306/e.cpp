#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define sz(a)   strlen(a)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int n;

void work()
{
     int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = (int) s.size();
        string res = "";
        for (int i = 0; i < n - 2; i++)
        {
            res += '9';
        }
        for (int lcp = n - 1; lcp >= 0; lcp--)
        {
            if (s[lcp] != '0')
            {
                for (char c = s[lcp] - 1; c >= (lcp == 0 ? '1' : '0'); c--)
                {
                    string cur = s.substr(0, lcp) + c;
                    int mask = 0;
                    for (int i = 0; i < (int) cur.size(); i++)
                    {
                        mask ^= (1 << (cur[i] - '0'));
                    }
                    string me = "";
                    for (int i = 9; i >= 0; i--)
                    {
                        if ((mask >> i) & 1)
                        {
                            me += (i + '0');
                        }
                    }
                    while (cur.size() + me.size() < s.size())
                    {
                        cur += '9';
                    }
                    cur += me;
                    if (cur.size() == s.size())
                    {
                        res = cur;
                        break;
                    }
                }
                if (res.size() == s.size())
                {
                    break;
                }
            }
        }
        cout << res << '\n';
    }
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work();
   
    return 0; 
}