//#include<cstdio>
//
//#include<cstdlib>
//
//#include<algorithm>
//
//using namespace std;
//
//const int N = 201;
//
//const int K = 7;
//
//int n, kk;
//int f[N][K];             //一个数划分到最后都是从1开始。所以把它想成2种分法：
//int main()              //含1的划分，不含1的划分：第一种分法：若含1，就相当于把 i-1 分成j - 1的方案数，因为第j个方案就是1
//{               
//		//第二种分法：若不含1，就当于把所有数都-1分成j份即由f【i-j】【j】递推来，不管他们怎么分，相当于加上这j个1就会符合不含1的设定
//	scanf("%d%d", &n, &kk); 
//
//	f[0][0] = 1;   
//	//这句话就相当于f[i][1] = 1，所有数划分成1份就是1；可以通过f【0】【0】由核心代码把f[i][1]全部更新为1；
//
//	for (int k = 1; k <= kk; k ++)
//
//		for (int i = 1; i <= n; i ++)
//
//			if(i >= k)
//
//				f[i][k] += f[i - 1][k - 1] + f[i - k][k];
//
//	printf("%d\n", f[n][kk]);
//
//	return 0;
//
//}