//
//#include<iostream>
//using namespace std;
//#define INF 1000000
//int sum[101][101];
//int a[101];
//int d[101][101]  ,p[101][101] ;
//int n,m;
//int min_num=INT_MAX,max_num=INT_MIN;
//
////	INT_MAX 
////	INT_MIN
//int main()
//{
//	cin>>n>>m;
//	//输入数据
//	for(int i=1;i<=n;++i)
//		cin>>a[i],a[n+i]=a[i];
//	for(int i=1;i<=2*n;++i)
//	{
//		sum[i][i]=a[i];
//		for(int j=i+1;j<=2*n;++j)
//			sum[i][j]=sum[i][j-1]+a[j];
//	}
//	//维护一下
//	for(int i=1;i<=2*n;++i)
//		for(int j=i;j<=2*n;++j)
//			{
//				sum[i][j]=(sum[i][j]%10+10)%10;
//			}
//
//	//前缀和 Get 然后开始递推
//	if(m==1)
//		 min_num=sum[1][n],max_num=sum[1][n];
//	else
//	{
//		for(int s=0;s<n;s++)
//		{
//			for(int i=0;i<=n;++i)
//				for(int j=0;j<=m;++j)
//					d[i][j]=INF,p[i][j]=0;
//			d[0][0]=p[0][0]=1;
//			for(int i=1;i<=n;++i)
//				for(int j=i;j<=min(i,m);++j)
//					  for(int k=j-1;k<=i-1;k++)
//                    {
//                        d[i][j]=min(d[i][j],d[k][j-1]*sum[s+k+1][s+i]);
//                        p[i][j]=max(p[i][j],p[k][j-1]*sum[s+k+1][s+i]);
//                    }
//		 
//		}
//		  min_num=min(min_num,d[n][m]);  
//          max_num=max(max_num,p[n][m]);
//	}
//	cout<<min_num<<" "<<max_num<<endl;
//
//}
//
//
