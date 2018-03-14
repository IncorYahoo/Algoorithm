//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int map[51][51],m,n,x1,y1,x2,y2;
//long long f[51][51];
//int main()
//{
//	scanf("%d%d%d%d%d%d",&n,&m,&y1,&x1,&y2,&x2);
//	memset(f,0,sizeof(f));
//	f[x1][y1]=1;
//	for(int j=1;j<=m;j++)
//		for(int i=1;i<=n;i++)
//		{
//
//			if(i>=2&&j>1) 
//				f[i][j]+=f[i-2][j-1];
//			if(i>=1&&j>2) 
//				f[i][j]+=f[i-1][j-2];
//			if(i+2<=n&&j>1) 
//				f[i][j]+=f[i+2][j-1];
//			if(i+1<=n&&j>2) 
//				f[i][j]+=f[i+1][j-2];
//		}
//		printf("%lld\n",f[x2][y2]);
//		return 0;
//}