//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<stdio.h>
//using namespace std;
//#define  FO(i,L,R) for(int i=L;i<=R;++i)
//#define  FR(i,L,R) for(int i=L;i>=R;--i)
//const int N=10;
//
//struct guy
//{
//	int p;
//	int k;
//	int a[N];
//}g[1000];
//double w[1005],sum[1005];
//int n,m;
//
//int main()
//{
//	scanf("%d%d",&n,&m);
// 
//	FO(i,1,n)
//	{
//		scanf("%d%d",&g[i].p,&g[i].k);
//	 
//		FO(j,1,g[i].k)
//		{
//
//			scanf("%d",&g[i].a[j]);
// 
//		}
//	}
//	int t;
//	FO(i,1,m)
//	{
//			scanf("%d",&t);
//	 	scanf("%lf",&w[t]);
//		 
//	}
//	double ans =0;
//	FO(i,1,n)
//	{
//		double s=0;
//		FO(j,1,g[i].k)
//			s+=w[g[i].a[j]];
//		sum[i]=g[i].p*(1+s);
//		ans = ans>sum[i]?ans:sum[i];
//	}
//	printf("%.4f",ans);
//	return 0;
//
//}
//
//
//
//
//
//
//
