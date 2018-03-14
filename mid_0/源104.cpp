///*
//作者:incor
//题目:p1501 二叉树最大宽度和高度
//*/
// 
//#include <iostream>
//using namespace std;
//int a[100001]={0,0};
//int b[100001]={0};
//int main()
//{
//   int i,n,left,right;
//   cin>>n;
//
//   for(int i=1;i<=n;i++)
//   {
//	   cin>>left>>right;
//	   if(i==1)
//	   {
//		   if(left!=0 ||right!=0)
//			   a[1]=1;
//	   }
//	   if(a[i]!=0)
//	   {
//		   if(left)
//		   a[left]=a[i]+1;
//		   if(right)
//		   a[right]=a[i]+1;
//	   }
//   }
// if(n==1)
// {
//	 cout<<1<<" "<<1<<endl;
//	  
// }else 
// {
//   for(int i=1;i<=n;++i)
//	   if (a[i]!=0)
//	   {
//		   b[a[i]]++;
//	   }
//   int w = b[1];
//   for(int i=2;i<n;++i)
//	   w=w>b[i]?w:b[i];
//   cout<<w<<" ";
//
//   int max=a[1];
//   for(int i=2;i<=n;i++)
//	  max = a[i]>max?a[i]:max;
//   cout<<max<<endl;
//    }
//}
// 