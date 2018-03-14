//#include<stdio.h>
//#include<string.h>
//int f[101][1000000];
//int len(int a);
//int main()
//{
//	int n,i,j,l,lnow;
//	scanf("%d",&n);
//	f[2][0]=1;
//	for(i=3;i<=n;i++)
//	{
//		l=len(i-1);
//		for(j=0;j<=l;j++)
//		{
//			f[i][j]=f[i-1][j]+f[i-2][j];
//		}
//		for(j=0;j<=l;j++)
//		{	    
//			if(f[i][j]>9)
//			{
//				f[i][j+1]+=f[i][j]/10;
//				f[i][j]%=10;
//			}
//		}
//		lnow=len(i);
//		for(j=0;j<=lnow;j++)
//		{
//			f[i][j]*=i-1;
//		}
//		for(j=0;j<=lnow;j++)
//			if(f[i][j]>9)
//			{
//				f[i][j+1]+=f[i][j]/10;
//				f[i][j]%=10;
//			}
//	}
//	l=len(n);
//	for(i=l;i>=0;i--)
//	{
//		printf("%d",f[n][i]);
//	}
//	putchar('\n');
//	return 0;
//}
//
//int len(int a)
//{
//	int i=100000-1;
//	while(f[a][i]==0 && i>0) i--;
//	return i;
//}