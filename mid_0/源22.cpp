///*
//作者:incor
//题目:p1400 屌丝的逆袭(腾讯马拉松)
//*/
// 
//#include <iostream>
//using namespace std;
//#include<cmath>
//int a [21][21];
//int b[21][21];
//int c[21][21]={0};
//int main()
//{ 
//	int n,m;
//	while(1)
//	{
//		cin>>n>>m;
//		if(n==0||m==0)
//			break;
//		for(int i=1;i<=n;i++)
//			for(int j=1;j<=m;j++)
//			{
//				cin>>a[i][j];
//				if(a[i][j] >0) b[i][j]=1;
//				else b[i][j] =-1;
//				a[i][j] =abs(a[i][j]);
//			}
//
//		for(int i=1;i<=n;i++)
//			for(int j=1;j<=m;j++)
//			{
//				if( i ==1)
//				{ 
//					if(j==1) c[i][j] =  -1*b[i][j]*b[i+1][j]* a[i+1][j]  + -1*b[i][j]*b[i][j+1]*  a[i][j+1] ;
//					else if(j==m) c[i][j] = -1*b[i][j]*b[i+1][j]* a[i+1][j] +  -1*b[i][j]*b[i][j-1]* a[i][j-1] ;
//					else c[i][j] = -1*b[i][j]*b[i+1][j]* a[i+1][j] + -1*b[i][j]*b[i][j-1]*a[i][j-1] + -1*b[i][j]*b[i][j+1]* a[i][j+1] ;
//				}
//				else if(i==n)
//				{
//					if(j==1)	c[i][j] = -1*b[i][j]*b [i-1][j] *   a[i-1][j] + -1*b[i][j]*b[i][j+1] *  a[i][j+1]  ;
//					else if(j==m)	c[i][j] =-1*b[i][j]*b[i-1][j] *  a[i-1][j] +  -1*b[i][j]*b[i][j-1] *  a[i][j-1]  ;
//					else 	c[i][j] = -1*b[i][j]*b[i-1][j] *  a[i-1][j] +-1*b[i][j]*b[i][j+1] *  a[i][j+1] + -1*b[i][j]*b[i][j-1] *  a[i][j-1]  ;
//				}
//				else if(j==1)c[i][j] =  -1*b[i][j]*b[i+1][j] *   a[i+1][j] +-1*b[i][j]*b[i][j-1] *  a[i][j-1]+ -1*b[i][j]*b[i][j+1]*  a[i][j+1] ;
//				else if (j==n)c[i][j] = -1*b[i][j]*b[i-1][j] *  a[i-1][j]  +-1*b[i][j]*b[i][j-1] *  a[i][j-1]+ -1*b[i][j]*b[i][j+1]*  a[i][j+1] ;
//				else c[i][j] = -1*b[i][j]*b[i-1][j] *  a[i-1][j] + -1*b[i][j]*b[i+1][j] *   a[i+1][j] +-1*b[i][j]*b[i][j-1] *  a[i][j-1]+ -1*b[i][j]*b[i][j+1]*  a[i][j+1] ;
//			}
//
//			//查找最大值
//			int max=c[1][1];
//			int hang =1;
//			int lie =1;
//			for(int i=1;i<=n;i++)
//				for(int j=1;j<=m;j++)
//				{
//					if(max < c[i][j])
//					{
//						max=c[i][j];
//						 hang = i ;
//						 lie = j ;
//					}
//				}
//				 
//			cout<<hang<<" "<<lie<<" "<<max<<endl;
//
//	}
//	
//
//
//
//
//	return 0;
//} 