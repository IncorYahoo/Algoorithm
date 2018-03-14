//#include<iostream>
//using namespace std;
//#include<cmath>
// 
//int n,m,p;
//int a[100000]={0},b[100000],c[100000] ;
//long long d[100000],e[100000];
//long long min(long long * p )
//{
//	int flag=false;
//	long long m_num;
//	for(int j=0;j<=n;j++)
//	{
//		if(p[j]!=0)
//		{
//			if(!flag)
//			{
//				m_num = p[j]; 
//				flag=true;
//			}
//			else
//			m_num = m_num<p[j]?m_num:p[j];
//		}
//	}
//	return  m_num;
//}
//long long kk(long long * p,int i,int flag )
//{
//	if(m==1)
//	{
//		return min(p);
//	}
//	else 
//	{
//		if(i!=m)
//		{
//				long long *s = flag==0?d:e;
//				memset(s,0,sizeof(s));
//				 
//				for(int j=1;j<=n;j++)
//				{
//					if(p[j]!=0)
//					{
//						if(j==1)
//						{
//							if(s[j+1] ==0)
//								s[j+1]=p[j]+b[j];
//							else
//								s[j+1]=s[j+1]<p[j]+b[j]?s[j+1]:p[j]+b[j];
//						}
//						else if(j==n)
//						{
//							if(s[j-1] ==0)
//								s[j-1]=p[j]+c[j];
//							else
//								s[j-1]=s[j-1]<p[j]+c[j]?s[j-1]:p[j]+c[j];
//						}
//						else 
//						{
//							if(s[j+1] ==0)
//								s[j+1]=p[j]+b[j];
//							else
//								s[j+1]=s[j+1]<p[j]+b[j]?s[j+1]:p[j]+b[j];
//							if(s[j-1] ==0)
//								s[j-1]=p[j]+c[j];
//							else
//								s[j-1]=s[j-1]<p[j]+c[j]?s[j-1]:p[j]+c[j];
//
//						}
//					}
//			return  kk(s,++i,1-flag );
//		}
//		
//
//	}
//	else return min(p);
// 
//}
// void ss()
// {
//	 for(int i=1;i<=n;i++)
//		 if(a[i]<p&&a[i+1]>p)
//		 {
//			 if(i==1)
//				 d[2]=p-a[i];
//			 if(i==n)
//				 d[n-1]=a[n]-p;
//			 else
//			 {
//				 d[i]=p-a[i];
//				 d[i+1]=a[i+1]-p;
//			 }
//			 break;
//		 }
//	 cout<<kk( d,1,1)<<endl;
//
// }
//int main()
//{
//	int t;
//	cin>>t;
// 
//
//	while(t--)
//	{
//		cin>>n>>m>>p;
//		for(int i=1;i<=n;i++)
//		 
//			cin>>a[i];
//	  
//			
//		for(int i=2;i<=n;i++)
//			b[i]=a[i]-a[i-1] ;
//		for(int i=1;i<n;i++)
//			c[i]=a[i+1]-a[i] ;
//
//
//		ss();
//
//	}
//
//
//
//
//
//	system("pause");
//	return 0;
//}