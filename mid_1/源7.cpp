//#include <cstdio>
//#include <cstring>
//int f[30][30];
//int n,m,a,b;
//bool v[30][30];
//int fx[9]={1,1,2,2,-1,-1,-2,-2,0};
//int fy[9]={2,-2,1,-1,2,-2,1,-1,0};
//int main()
//{
//
//	scanf("%d %d %d %d",&n,&m,&a,&b);
//	memset(f,0,sizeof(f));
//	f[0][0]=1;
//	memset(v,true,sizeof(v));
//	for(int i=0;i<10;i++)
//	{
//		int x=a+fx[i];
//		int y=b+fy[i];
//		if(x>=0&&x<=n&&y>=0&&y<=m)
//			v[x][y]=false;
//	}
//	for(int i=0;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			if(i>0)if(v[i-1][j])f[i][j]+=f[i-1][j];
//			if(j>0)if(v[i][j-1])f[i][j]+=f[i][j-1];
//		}
//	}
//	printf("%d",f[n][m]);
//}