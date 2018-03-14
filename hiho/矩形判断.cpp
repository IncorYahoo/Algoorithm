#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f
const int maxn =1e5+5; 
const int mod = 1000000007;  
#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
struct node{
	int x1, y1,x2,y2;
};
struct point{
	int x,y;
};
node p[5];


void init()
{ 
	 
	f(i,1,4)
		cin>>p[i].x1>>p[i].y1>>p[i].x2 >>p[i].y2;  
}
bool jdugepoint()
{
	set<pair<int,int> > s;
 	f(i,1,4)
 	{
 		s.insert(make_pair(p[i].x1,p[i].y1));
 		s.insert(make_pair(p[i].x2,p[i].y2)); 
 	}
	 return s.size()==4; 
}
bool jdugeline()
{
	 f(i,2,4)
	 {
	 	if((p[i].y2-p[i].y1)*(p[1].y2-p[1].y1)==(p[i].x2-p[i].x1)*(p[1].x2-p[1].x1))
	 	continue;
	 	if((p[i].y2-p[i].y1)*(p[1].y2-p[1].y1)==-(p[i].x2-p[i].x1)*(p[1].x2-p[1].x1))
	 	continue;
 
	 	return false;
	 }
	 return true;
}
void slove()
{
	if(jdugepoint())
	{
	  	if(jdugeline())
		{
			cout<<"YES"<<endl;
			return ;
		}
	}
	cout<<"NO"<<endl;
}
int main()
{
     
    freopen("in","r",stdin);
  
    int n;
    cin>>n;
    while(n--)
    {
    	init();

    	slove();
    }
   
    return 0; 
}

