//#include<iostream>
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	int n,m,p;
//	int a[10000],b[10000];
//	int min,min_num;
//	int pos;
//
//	while(t--)
//	{
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		bool flag=true;
//		long long tmp ;
//		int tmpm  ;
//		cin>>n>>m>>p;
//		for(int i=1;i<=n;i++)
//		{
//			cin>>a[i];
//			if(a[i]>p&&a[i-1]<p)
//				pos=i-1;
//
//			if(i!=1)
//			{
//				b[i]=a[i]-a[i-1];
//				if(flag)
//				{
//					min = b[i];
//					min_num = i;
//
//
//					flag=false;
//				}
//				else
//					min=min<b[i]?min:b[i],	min_num = i;
//
//			}
//		}
//		if(m>=abs(pos-min_num))
//		{
//			//判断直接到最小地方 开始累加
//			tmp = 0;
//			tmpm = m;
//			if(min < (p-a[pos]<a[pos+1]-p ?   p-a[pos]:a[pos+1]-p ))
//			{
//				//直接去 
//				if(min >pos)
//				{
//					int k=pos+1;
//					for(int i=1;i<=m;i++)
//					{
//						if(k!=m)
//						{
//							if(i==1)
//							tmp+=a[k]-p;
//							else 
//							tmp+=b[++k];
//						}
//						else
//							tmpm+=b[min_num];
//					}
//				}
//				else 
//				{
//					int k=pos ;
//					for(int i=1;i<=m;i++)
//					{
//						if(k!=m)
//						{
//							if(i==1)
//							tmp+=p-a[k];
//							else 
//							tmp+=b[--k];
//						}
//						else
//							tmp+=b[min_num];
//					}
//				}
//			
//			}
//			else
//			{
//				//走最小
//				if(min >pos)
//				{
//					int k=pos ;
//					for(int i=1;i<=m;i++)
//					{
//						if(k!=m)
//						{
//							if(i==1 && k!=0)
//								tmp+=p-a[k];
//							else if(i==1&&k==0)
//								tmp+=a[++k]-p;
//							else 
//							tmp+=b[++k];
//						}
//						else
//							tmpm+=b[min_num];
//					}
//				}
//				else 
//				{
//					int k=pos+1;
//					for(int i=1;i<=m;i++)
//					{
//						if(k!=m)
//						{
//							if(i==1)
//							tmp+=a[k]-p;
//							else 
//							tmp+=b[--k];
//						}
//						else
//							tmp+=b[min_num];
//					}
//				}
//			}
// 
//		}
//		 cout<<tmp<<endl;
//
//
//
//	}
//
//
//	system("pause");
//
//	return 0;
//
//}