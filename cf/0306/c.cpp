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
string  s;
string req="abcdefghijklmnopqrstuvwxyz";
void work()
{
	cin>>s;
	int len =s.size();
 	if(len>25)
 	{
 		int ans=0;
 		char c ='a';
 		f(i,0,len-1)
 		{
 			if(s[i]<=c)
 			{
 				s[i]=c;
 				c++;
 			}
 			if(c>'z')
 			{
 				ans=1;
 				break;
 			}
 		}
 		if(ans)cout<<s<<endl;
 		else cout<<-1<<endl;
 	}
 	else cout<<-1<<endl;




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