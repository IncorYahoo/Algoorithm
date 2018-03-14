//#include <stdio.h>
//#include <string.h>
//int m;
//int a[10000];
//int b[10000];
//void dfs(int n)
//{
//	if(n==m)
//	{
//		for(int j=1;j<m;j++)
//			printf("%d ",b[j]);
//		printf("%d\n",b[m]);
//	}
//	n++;
//	for(int i=1;i<=m;i++)
//	{
//		if(a[i])  continue;
//		a[i]=1;
//		b[n]=i;
//		dfs(n);
//		a[i]=0;
//	}
//}
//int main()
//{  
//	m=8;
//	memset(a,0,sizeof(a));
//	dfs(0);
//}