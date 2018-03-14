//
//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;i++)
//#define g(i,l,r) for(int i=l;i>=r;i--)
//const int maxn = 1e5+5 ;
//
//struct  node 
//{
//	int x,y,r;	
//};
//node e[5]; 
//int ans ,n;
//void dd(int l,int r )
//{
//	  if(((e[l].y-e[r].y)*(e[l].y-e[r].y)+(e[l].x-e[r].x)*(e[l].x-e[r].x)) < (e[l].r+e[r].r)*(e[l].r+e[r].r))
//	 ans++; 
//}
//int zz[5][2] ={{-10,-10},{-10,10},{ 10,-10},{ 10,10}};
//bool cv(int n,int k )
//{
//	int xx = zz[k-1][0];
//	int yy = zz[k-1][1];
//	return (e[n].y - yy)*(e[n].y - yy) +(e[n].x - xx)*(e[n].x - xx) < e[n].r*e[n].r ;
//}
//bool cover(int n)
//{
//	if(n==1) {
//		return cv(1,1)&& cv(1,2)&&cv(1,3)&& cv(1,4);
//	}
//	else if(n==2)
//	{
//		return (cv(1,1)|| cv(1,2)||cv(1,3)||cv(1,4)) && (cv(2,1)|| cv(2,2)||cv(2,3)||cv(2,4)) ;
//	}
//	else {
//		return (cv(1,1)|| cv(1,2)||cv(1,3)||cv(1,4)) && (cv(2,1)|| cv(2,2)||cv(2,3)||cv(2,4)) && (cv(3,1)|| cv(3,2)||cv(3,3)||cv(3,4)) ;
//	}
//}
//int main()
//{
//	freopen("c.in","r",stdin);
//	cin>>n;
//	f(i,1,n)
//	{
//		cin>>e[i].x>>e[i].y>>e[i].r;
//	}
//	if(n==1)cout<<2<<endl;
//	else if(n==2)
//	{
//		dd(1,2);
//		if(ans==0)
//		 	cout<<3<<endl; 
//		else 
//			 cout<<4<<endl;
//	}
//	else if(n==3)
//	{
//		dd(1,2);
//		dd(1,3);
//		dd(2,3);
//
//		switch(ans)
//		{
//			case 0:
//				{
//					if(cover(3))cout<<3<<endl;
//					else cout<<4<<endl;
//						break;
//				}
//			
//			case 1:
//				{
//					if(cover(3))cout<<4<<endl;
//					else cout<<5<<endl; 
//						break;	
//				}
//			case 2:
//				{
//					if(cover(3))cout<<5<<endl;
//					else cout<<6<<endl; 
//						break;	
//				}
//			case 3 :
//				{
//					if(cover(3))cout<<7<<endl;
//					else cout<<8<<endl; 
//						break;	
//				}
//		}
//		
//	}
//  return 0;
//
//}