//#include<iostream>
//using namespace std;
//
//
////#1：转90度：图案按顺时针转90度。
////#2：转180度：图案按顺时针转180度。
////#3：转270度：图案按顺时针转270度。
////#4：反射：图案在水平方向翻转（形成原图案的镜像）。
////#5：组合：图案在水平方向翻转，然后按照#1-#3之一转换。
////#6：不改变：原图案不改变。
////#7：无效转换：无法用以上方法得到新图案。
//int a[12][12];
//
//int main()
//{
//	int n ;
//	int flag [8]={0};
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	//#1 90 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i][j] != a[j][n-i+1])
//				flag[1] =1;
//		}
//	}
//
//		//#1 180 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i][j] != a[n-i+1][n-j+1])
//				flag[2] =1;
//		}
//	}
//		//#1 270 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i][j] != a[n-j+1][i])
//				flag[3] =1;
//		}
//	}
//	//#4：反射：图案在水平方向翻转（形成原图案的镜像）。
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i][j] != a[i][n-j+1])
//				flag[4] =1;
//		}
//	}
////#5：组合：图案在水平方向翻转，然后按照#1-#3之一转换。
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i][j] != a[n-j+1][n-i+1] || a[i][j] != a[n-i+1][n-(n-j+1)+1]||a[i][j] != a[n-(n-j+1)+1][i] )
//				flag[5] =1;
//		}
//	}
////#6：不改变：原图案不改变。
//	cout<<"#6"<<endl;
////#7：无效转换：无法用以上方法得到新图案。
//
//	return 0;
//
//}