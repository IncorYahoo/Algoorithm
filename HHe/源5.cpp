#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <bitset>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=1000+10;
const int maxm=200000+10;
const int mod=(int)1e9+7;
const int INF=0x3f3f3f3f;
const ll LINF=(1LL<<62);
const double eps=1e-9;
const double PI=acos(-1.0);
#define mst(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for (int i=(a);i<b;i++)
#define ALL(x) x.begin(),x.end()
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second
int bit[maxn][maxn],n,a[maxn][maxn];
void update(int i,int j,int val){
    for (int x=i;x<=n;x+=lowbit(x)) 
		for (int y=j;y<=n;y+=lowbit(y))
        bit[x][y]+=val;
}
int query(int i,int j){
    int res=0;
    for (int x=i;x;x-=lowbit(x)) for (int y=j;y;y-=lowbit(y))
        res+=bit[x][y];
    return res;
}
int main(){
 
    freopen("in","r",stdin);
 
    int m; scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
        if (a[i][j]) 
			update(i,j,1);
    }
    for (int i=0;i<m;i++){
        int op; scanf("%d",&op);
        if (op==1){
            int x,y,v; scanf("%d%d",&x,&y);
            v=(a[x][y]^1)-a[x][y];
            a[x][y]^=1;
            update(x,y,v);
        } else {
            int x1,y1,x2,y2; scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            int ans=query(x2,y2)-query(x1-1,y2)-query(x2,y1-1)+query(x1-1,y1-1);
            printf("%d\n",ans);
        }
    }
    return 0;
}