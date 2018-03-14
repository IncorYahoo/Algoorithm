#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
char a[sz];
int nxt[sz],nn[sz]; 
void getnxt()
{
	int i=0,len=strlen(a),k=-1;
	CLR(nxt,-1); 
	while(i<len)
	{
		if(k==-1||a[i]==a[k])
			nxt[++i]=++k;
		else k=nxt[k]; 
	} 
}
void kmp()
{
	getnxt();
	int len=strlen(a);
	int ans =nxt[len-1];
	if(ans==0)
	{
		cout<<"Just a legend"<<endl;
		return ;
	}
	bool flag =false;
	g(i,len-2,0)
		if(ans==nxt[i])
		{
			flag=true;
			break;
		}
	if(flag)f(i,0,ans)cout<<a[i];
	else 	cout<<"Just a legend"<<endl;

//	f(i,0,len-1)cout<<nxt[i]<<" ";
 /*	f(i,0,len-1)ans=max(ans,nxt[i]);




 	f(i,0,len-1) nn[nxt[i]]++;
 	f(i,ans,1)
 		if(nn[i]==2)break;
 		else ans=i-1;
 	if(ans<2)cout<<"Just a legend"<<endl;
 	else cout<<ans<<endl;
*/
}
int main()
{
     FAST_IO ;
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cin>>a;
    kmp();
     
    return 0; 
}


