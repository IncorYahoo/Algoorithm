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
char c[26];
char a[205];
char to[200];
int cnt;	
void work()
{
    cin>>a;
    int len = strlen(a);
    CLR(c,0);
    
    f(i,0,len-1)
    { 
    	if(a[i]=='J') a[i]='I';
		if(c[a[i] -'A']==0)
		{
			to[cnt++] = a[i]  ;
			c[a[i]  -'A']=1;
		} 
    } 
    c['J'-'A']=1;
    while(cnt<25){
		int j = 0;
		while(c[j]!=0   )
			j++;
		c[j]=1;
		to[cnt++] = (char)(j+'A'); 
    }
  	f(i,0,4)
 	{
 		f(j,0,4)
 		cout<<to[i*5+j];
 		cout<<endl; 
 	}
 	
 	
}

int main()
{
 //   FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    work();
  
    return 0; 
}