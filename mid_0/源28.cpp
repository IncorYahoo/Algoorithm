//
//#include<iostream>
//using namespace std;
////int n=1000000000;
////5
////2 3
////2 1
////2 4
////4 5
//int a[10000][10000]={0};
//int b[10000]={0};
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	int x,y;
//	while(m--)
//	{
//		cin>>x>>y;
//		a[x][y]=1;
//		a[y][x]=1;
//		b[x]=1;
//		b[y]=1;
//
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i;j<=n;j++)
//		{
//			if(a[i][j] ==1)
//			{
//				for(int k=1;k<=n;k++)
//				{
//					if(k!= i && a[j][k] == 1 &&a[i][k]==1)
//						b[x]=0;
//				}
//			}
//		}
//
//	}
//	int sum=0;
//	for(int i=0;i<=n;i++)
//	{
//		if(b[i]==1)
//			sum++;
//	}
//	cout<<sum<<endl;
//	for(int i=0;i<=n;i++)
//	{
//		if(sum==1 &&b[i]==1)
//			cout<<i;
//
//		if(b[i]==1&& sum!=1)
//		{
//			sum--;
//			cout<<i<<" ";
//		}
//			
//	}
//	cout<<endl;
//
//
//
//	system("pause");
//	return 0;
//}