//#include<iostream>
//
//#include<cmath>
//
//using namespace std;
//
//int main()
//
//{
//
//	int n,m,i ,l,r,x,y,xx ,ans;
//	cin>>n;
//	while(n--)
//	{
//		cin>>m; int a[55]={0};
//		for(i=0;i<m;i++)
//		{
//			cin>>xx;
//			a[xx]++;
//		}
//		
//		x=a[0];
//		y=a[49]; l=0;r=49;
//		while(l<r)
//		{
//			if(x<y) {x+=a[++l];}
//			else { y+=a[--r];}
//
//		}
//		ans =0;
//
//		for(i=0;i<=49;i++)
//			ans = ans +abs(l-i)*a[i] ;
//		cout<<l<<" "<<ans<<endl;
//	}
// 
// 
//return 0;
//
//}
