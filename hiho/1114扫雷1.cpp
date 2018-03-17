#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300; 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr)) 
typedef long long ll; 
int n,a [2][sz];
int arr[sz],b0[sz],b1[sz],ans0[sz],ans1[sz];
bool f0,f1;
void slove()
{
	f0=f1=true;
	b0[1]=0;
	b0[1]=1;
	f(i,2,n)
	{
		if(f0)
		{
			b0[i]=arr[i-1]-b0[i-1]-b0[i-2];
			if(b0[i]<0||b0[i]>1)f0=false;
		}
		if(f1)
		{
			b1[i]=arr[i-1]-b1[i-1]-b1[i-2];
			if(b1[i]<0||b1[i]>1)f1=false;
		}
	}
	if(arr[n]!=b0[n]+b0[n-1])
		f0=false;
	if(arr[n]!=b1[n]+b1[n-1])
		f1=false;
	
}
int main()
{
	LOACL
	int t;
	cin>>t;
	while(t--)
	{
		CLR(a,0);

		cin>>n;
		f(i,1,n)cin>>arr[i];
		slove();
		int cnt0 =0,cnt1=0;
		if(f0  && f1)
		{
			f(i,1,n)
			{
				if(b0[i]==1 && b1[i]==1)
				{
					ans1[cnt1++]=i ;
				}
				else if  (b0[i]==0 && b1[i]==0)	
				ans0[cnt0++]=i ;	
			}	
		}
		else if(  f1 )
		{
			f(i,1,n)
            if (b1[i] == 1)  
                ans1[cnt1++] = i;  
            else  
                ans0[cnt0++] = i;  
		}
		else if(  f0 )
		{
			f(i,1,n)
            if (b0[i] == 1)  
                ans1[cnt1++] = i;  
            else  
                ans0[cnt0++] = i;  
		}
		cout<<cnt1;
		f(i,0,cnt1-1)cout<<" "<<ans1[i];cout<<endl;
		cout<<cnt0;
		f(i,0,cnt0-1)cout<<" "<<ans0[i];cout<<endl;


	}
	return 0;
}
