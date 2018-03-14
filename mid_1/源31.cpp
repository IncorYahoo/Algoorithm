//#include <cstdio>
//#include <cstring>
//#include<iostream>
//using namespace std;
//#define FO(i,L,R) for(int i=L;i<=R;++i)
//#define FR(i,L,R) for(int i=L;i>=R;--i)
//int f[30][30];
//int n,m,a,b;
//bool v[30][30];
//int fx[9]={1,1,2,2,-1,-1,-2,-2,0};
//int fy[9]={2,-2,1,-1,2,-2,1,-1,0};
// int main()
// {
//	 cin>>n>>m>>a>>b;
//	 
//	 memset(f,0,sizeof(f));
//	 f[0][0]=1;
//	 memset(v,true,sizeof(v));
//	 FO(i,0,9)
//	 {
//		 int x = a+fx[i];
//		 int y = b+fy[i];
//		if(x>=0&&x<=n&&y>=0&&y<=m)v[x][y]=false;
//	 }
//	
//	 FO(i,0,n)
//		 FO(j,0,m)
//		 {
//			 if(i>0) if(v[i-1][j]) f[i][j]+=f[i-1][j];
//			 if(j>0) if(v[i][j-1]) f[i][j]+=f[i][j-1];
//		 }
//
//	 cout<<f[n][m]<<endl;
//	 return 0;
//
//}