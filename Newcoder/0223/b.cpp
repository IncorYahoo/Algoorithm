#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e4+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
bool a[maxn][256];
char str[maxn];
bool f[maxn][maxn];
int main()
{
     
    freopen("in","r",stdin);
    freopen("out","w",stdout);
 	int n,m,q;
 	cin>>n>>m>>q;
 	f(i,1,n)
 	{
 		cin>>str;
 		f(j,0,m-1)
 		a[i][str[j]]=1;
 	}
 	while(q--)
 	{
 		scanf("%s",str+1);
 		memset(f,0,sizeof(f));
 		int len =strlen(str+1);
 		if(n<len)
 		{
 			cout<<"NO"<<endl;
 			continue;	
 		}
 		else
 		{
 			f[0][0]=1;
 		 	f(i,1,n)
 		 	{
 		 		if(a[i]['#'])
 		 		f(j,0,len)
 		 				f[i][j]|=f[i-1][j];
 		 		f(j,1,len)
 		 		{
 		 			if(a[i][str[j]])
 		 				f[i][j]|=f[i-1][j-1];
 		 		}		
 		 	}

 			if(f[n][len]) puts("YES");
 				else puts("NO");
 		}
 	}



    return 0; 
}

