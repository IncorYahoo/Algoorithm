#include<iostream> 
using namespace std;
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
const int maxn =1e6+5;
int a[maxn],n,l,r,cnt;
bool flag= false;
int main()
{
	cin>>n>>l>>r;
	int ans1,ans2;
 	for(int i=0 ;i*l<=n;i++)
 	{
 		if((n-i*l)%r==0)
 		{
 			flag =true;
 			ans1=i;
 			ans2 = (n-i*l)/r;
 			break;
 		}
 	}
 	if(!flag)
 	{
 		cout<<-1<<endl;
 		return 0 ;
 	}

 	//构造数据块
 	cnt=0;
 	f(i,1,ans1)
 	{
 		f(j,1,l)
 		{
 			a[j+cnt+1]=j+cnt;
 		}
 		a[cnt+1] =cnt+l;
 		cnt+=l;
 	}
 	f(i,1,ans2)
 	{
		f(j,1,r)
 		{
 			a[j+cnt+1]=j+cnt;
 		}
 		a[cnt+1] =cnt+r;
 		cnt+=r;
 	}
 	f(i,1,n)
 		cout<<a[i]<<" ";
 	return 0;	


}