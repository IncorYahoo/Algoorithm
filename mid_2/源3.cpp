//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <map>
//#include <set>
//#include <vector>
//#include <queue>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//using namespace std;
//
//int chess[12][12];
//int w[12][12][1100];// 1<<10=1024
//
////其实就是把是否走过0123456789压缩到一个二进制数上
//
//int main()
//{
//	int i,j,t,k1,k2,k3,k4,k,g;
//	memset(w,1,12*12*1024*4);//设置大权值
//	w[0][1][0]=w[1][0][0]=0;
//	for(i=1;i<=10;i++)
//	{
//		for(j=1;j<=10;j++)
//		{
//			cin>>chess[i][j];
//			//两种情况//之前走过chess[i][j] 或否
//			for(t=0;t<(1<<10);t++)//0123456789
//			{ 
//				a1<<chess[i][j])))!=t)continue;//情况不存在，必然有chess[i][j]的状态
//				k=t-(1<<chess[i][j]);
//				//之前走过chess[i][j]
//				k1=w[i-1][j][t]+chess[i][j];
//				k2=w[i][j-1][t]+chess[i][j];
//				//之前未走过chess[i][j]
//				k3=w[i-1][j][k]+chess[i][j];
//				k4=w[i][j-1][k]+chess[i][j];
//				k1=k1<k2?k1:k2;
//				k3=k3<k4?k3:k4;
//				w[i][j][t]=k1<k3?k1:k3;
//			}
//		} 
//	}
//	cout<<w[10][10][(1<<10)-1];
//	return 0;
//}