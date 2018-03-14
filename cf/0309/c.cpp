#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF ((ll)2e9)

const int  inf = 987654321;
const int sz = 2e6 + 5;
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

ll poww(ll a,ll b,ll c )
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0) ans = ans*base%c; 
        base= base*base%c;
        b/=2;
    }
   return ans;
}
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
 
char s[sz];
int top1,top0,st1[sz],st0[sz],ct[sz],nxt[sz];
bool used[sz];
void work1 ()
{
	cin>>s;
	int len=sz(s);
	f(i,0,len-1)
	{
		if(s[i]=='0')
		{
			if(top1)
				nxt[st1[top1--]]=i+1;
			st0[++top0]=i+1;
		}
		if(s[i]=='1')
		{
			if (top0)
                nxt[st0[top0--]]=i+1;
			else
			{
				cout<<-1<<endl;
				return;
			}
			st1[++top1]=i+1;
		}
	}
	if (top1) 
	{
		cout<<-1<<endl;
		return;
	}
	int k=0;
	f(i,1,len)
	{
		if(!used[i])
		{
			k++;
			int cnt=0;
			for(int j=i;j;j=nxt[j])
				used[j]=true,cnt++;
			ct[i]=cnt;
		}
	}
	cout<<k<<endl;
 	f(i,1,len)
	{
		if(ct[i])
		{
			cout<<ct[i]<<" ";
	//		for(int j=i;j;j=nxt[j])
	//			cout<<j<<" ";
	  		cout<<endl;
		}	
	} 
}
void work  ()
{
	cin>>s;
	int len =sz(s);
	f(i,0,len-1)
	{
		if(s[i]=='0')
		{
			if(top1)
				nxt[st1[top1--]]=i+1;
			st0[++top0]=i+1;
		}
		if(s[i]=='1')
		{
			if (top0)
                nxt[st0[top0--]]=i+1;
			else
			{
				cout<<-1<<endl;
				return;
			}
			st1[++top1]=i+1;
		}
	}
	if(top1)
	{
		cout<<-1<<endl;
		return;
	}
	int k=0;
	f(i,1,len)
	{
		int cnt=0;
		if(!used[i])
		{
			k++;
			for(int j=i;j;j=nxt[j])
			{
				used[j]=1;
				cnt++;
			}
			ct[i]=cnt;
		}
	}
	cout<<k<<endl;
	f(i,1,len)
	{
		if(ct[i])
		{
			cout<<ct[i];
			for(int j=i;j;j=nxt[j])
			cout<<" "<<j;
			cout<<endl;
		}
	}


}
int main()
{
    FAST_IO ;
    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    cout<<"hello"<<endl;
 
    work ();
   
    return 0; 
}