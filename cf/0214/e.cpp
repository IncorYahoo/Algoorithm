#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll ;
#define f(i,l,r) for(int i=l;i<=r;i++)
#define g(i,l,r) for(int i=l;i>=r;i--)
const int maxn = 1e5+5 ;

struct  node 
{
	int x,y,r;	
};
node e[5]; 
int ans ;
void dd(int l,int r )
{
	if((e[l].y-e[r].y)*(e[l].y-e[r].y)+ (e[l].x-e[r].x)*(e[l].x-e[r].x) > e[l].r-e[r].r)
	 ans++; 
}
int main()
{
	cin>>n;
	f(i,1,n)
	{
		cin>>e[i].x>>e[i].y>>e[i].r;
	}
	if(n==1)cout<<2<<endl;
	else if(n==2)
	{
		dd(1,2);
		if(ans==0)
		 	cout<<3<<endl; 
		else 
			 cout<<4<<endl;
	}
	else if(n==3)
	{
		dd(1,2);
		dd(1,3);
		dd(2,3);
		switch(ans)
		{
			case 0:
				cout<<4<<endl;
				break;
			case 1:
				cout<<5<<endl;
				break;
			case 2:
				cout<<6<<endl;
				break;
			case 3 :
				cout<<8<<endl;
				break; 
		}
		
	}
 
}