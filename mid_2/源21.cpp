//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//#include<iostream>
//using namespace std;
//int a[100001]={},b[100001]={};
//int main()
//{
//	int i,j,n,v;
//	scanf("%d%d",&v,&n);
//	for(i=1;i<=n;i++) scanf("%d",&a[i]);
//	for(i=1;i<=n;i++)
//	{
//		for(j=v;j>=a[i];j--)
//		{
//			b[j]=max(a[i]+b[j-a[i]],b[j]);
//		}
//	}
//	printf("%d",v-b[v]);
//	return 0;
//}