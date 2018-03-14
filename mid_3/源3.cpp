//#include<iostream>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N =2005  ;
//int a[N],b[N],c[N],cnt,n;
//int main()
//{
//	freopen("in","r",stdin);
//	cin>>n;
//	f(i,1,n)cin>>a[i];
//	
//	f(i,1,n)
//	{
//		 if(a[i] != a[i-1])  cnt++ ;
//		 b[cnt]++;
//	}
//	if(cnt<=4) cout<< n<<endl;
//	else
//	{
//		c[1]=b[1]+b[2]+b[3]+b[4];
//		f(i,5,cnt)
//			c[i-3] = c[i-4]+b[i]-b[i-4];
//		f(i,5,cnt)
//			c[1]=max(c[1],c[i]);
//		cout<<c[1]<<endl;
//			
//	}
//	return 0;
//}