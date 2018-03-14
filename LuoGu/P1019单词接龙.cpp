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

#define lowbit(x) x&(-x)
#define X first
#define Y second 

#define pb push_back
#define pii pair<int,int>

int n,yc[30][30],vis[30],ans,an;
string str[25];
char ch ; 
 
int mt(int x,int y)
{
  
  int len1 = str[x].size();
  int len2 = str[y].size();
 
  bool flag =true;
  int k=0;
  g(i,len1-1,0)
  {
    f(j,i,len1-1)
      if(str[x][j]!=str[y][k++])
      {
        flag=false;
        break;
      }    
    if(flag) return str[x].size()-i;
    k=0;
    flag=true;
  }
  return 0; 
}
 
void dfs(int s)
{
  bool ff=false;
  f(i,1,n)
  {
    if(vis[i]>=2)continue;
    if(yc[s][i]==0)continue;
    if(yc[s][i]==str[s].size()||yc[s][i]==str[i].size() ) continue;

    an+=str[i].size()- yc[s][i]; 
    vis[i]++;
    ff=true;
    dfs(i);
    an-=str[i].size()-yc[s][i]; 
    vis[i]--; 
  }
  if(!ff) ans=max(an,ans);

}
 
void work()
{
  cin>>n;
  f(i,1,n)cin>>str[i];
  cin>>ch;
  f(i,1,n)f(j,1,n) yc[i][j] = mt(i,j);
  f(i,1,n) 
  {
    if(str[i][0]==ch)
    {
      vis[i]++;
      an=str[i].size();
      dfs(i);
      vis[i]=0;
    }
  }
  cout<<ans<<endl;     
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