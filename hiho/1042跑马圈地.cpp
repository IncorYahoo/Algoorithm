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
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 

void work()
{
    int n, m, L, l, r, t, b;  
    cin >> n >> m >> L;  
    cin >> l >> r >> b >> t;  
    if (L >= 2 * (m + n))  
    {  
        cout << m*n - (r - l)*(t - b) << endl;  
        return 0;  
    }  
    int l1, r1, t1, b1;  
    l1 = l;  
    r1 = r;  
    t1 = t;  
    b1 = b;  
    if (l + r <= m)     
    {  
        l1 = m - r;  
        r1 = m - l;  
    }  
    if (t + b <= n)  
    {  
        t1 = n - b;  
        b1 = n - t;  
    }  
    int ans = 0;  
    for (int i = 1; i < L / 2 && i <= m; i++)  
    {  
        for (int j = 1; j <= L / 2 - i&&j <= n; j++)  
        {  
            if (i <= l1 || j <= b1)  
                ans = ans >i*j ? ans : i*j;  
            else if (i > l1 && i <= r1 && j > b1 && j <= t1)  
                ans = ans > i*j - (i - l1)*(j - b1) ? ans : i*j - (i - l1)*(j - b1);  
            else if (i >= r1&&j >= t1)  
                ans = ans > i*j - (r - l)*(t - b) ? ans : i*j - (r - l)*(t - b);  
            else  
                continue;  
        }  
    }  
  
    cout << ans << endl;
}

int main()
{
    FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
    cout<<"hello"<<endl;

    return 0; 
}