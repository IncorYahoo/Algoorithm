#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

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
 
 
void work1()
{
	int seq1[] = {1, 2, 3, 3, 4, 5}, seq2[] = {9, 8, 7, 7, 6, 5};
	 cout<<upper_bound(seq1, seq1+6, 3) - seq1<<endl;
    cout<<lower_bound(seq1, seq1+6, 3) - seq1<<endl;

    cout<<endl;

    cout<<upper_bound(seq2, seq2+6, 7, greater<int>()) - seq2<<endl;
    cout<<lower_bound(seq2, seq2+6, 7, greater<int>()) - seq2<<endl;
}
ll n,dp[2][sz];
ll ans,x;
void work()
{
 	
	cin>>n;
	f(i,0,sz-1)dp[0][i]=dp[1][i]=INF;
	dp[0][0]=-INF;
  
  
	ll change =0;
	f(i,1,n)
	{
		cin>>x;
		ll id = upper_bound(dp[1],dp[1]+sz,x-i+1)-dp[1];
		dp[1][id]=x-i+1;
		ans=max(ans,id);
		dp[1][change]=min(dp[0][change],dp[1][change]);
		ans=max(ans,change);
		id = upper_bound(dp[0],dp[0]+sz,x-i)-dp[0];
		change=id;
		dp[0][id]=x-i; 
	}
	cout<<n-ans-1<<"\n";
}
const int N=sz;
void work3()
 { 
	cin>>n;
	for(int i=0;i<N;i++)dp[0][i]=dp[1][i]=INF;
	dp[0][0]=-INF;
	ll change=0;
	for(int i=1;i<=n;i++)
	{
		ll x;cin>>x;
		ll id=upper_bound(dp[1],dp[1]+N,x-i+1)-dp[1];
		dp[1][id]=x-i+1;ans=max(ans,id);
		dp[1][change]=min(dp[1][change],dp[0][change]);ans=max(ans,change);
		id=upper_bound(dp[0],dp[0]+N,x-i)-dp[0];
		change=id;
		dp[0][id]=x-i;
	}
	cout<<n-ans-1<<"\n";
}

int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work3();
   
    return 0; 
}