#include<bits/stdc++.h>
using namespace std;
#define LOACL  freopen("in","r",stdin);\
			freopen("out","w",stdout); 

#define add(u,v,w) (e[++tot]=(edge){v,head[u],1},head[u]=tot;) 
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
const int sz = 1e5+6;
int maxy; 
int p,r,k;
struct Node{
	int x,y;
}point[sz];
struct node{int l,r,n;}width[sz];  
bool cmp(Node d,Node e){return d.x<e.x;} 
void init()
{
	cin>>p>>r;
	f(i,0,p-1) cin>>point[i].x>>point[i].y;
}
 
bool check  ( int mid )
{

	int id = 0 , t  = point[0].y;
	f(i,0,p-1)
	{
		
		int pose = point[i].x;	
		int num = mid; 
		if(width[id].r < pose ) return false; 
		int j;  

		f(j,id,p)
		{
	 		if(j==k+1) return true;  
			while(width[j].l>pose)
			{  
				id=j;  
				t=width[j].n;  
				break;  
			}  
			int cnt;  
			if(j==id) cnt=t;  
			else cnt=width[j].n;  
			num-=cnt;  
			if(num<0)
			{  
				id=j;  
				t=0-num;  
				break;  
			}    
		}
	}
	return  false ; 
}

 
void work()
{
	sort(point,point+p,cmp);  
    maxy= 0 ;k=p-1;
    f(i,0,k)
    {
    	if(point[i].y>maxy)maxy = point[i].y;
		width[i].l= point[i].x-r; 
		width[i].r= point[i].x+r; 
		width[i].n= point[i].y;  
     }
    int l=0,r=maxy,mid=0;  
    while(r-l>1)
    {  
        mid=(l+r)>>1;  
        if(check(mid)) r=mid;  
        else l=mid;  
    }
	cout<<r<<endl;
}
 
int main()
{
	LOACL
	int T;
	cin>>T;
	while(T--)
	{
		init();
		work();
	}

	return 0;
}
