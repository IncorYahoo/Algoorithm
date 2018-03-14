//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//const int maxn = 500+5;
//using namespace std;
//int main()
//{
//	int a[maxn][maxn];
//	int b[maxn];
//	int n, m;
//	int max0 = -maxn;
//	int sum = 0;
//	memset(b, 0, sizeof(b));
//	scanf("%d %d", &n, &m);
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//			sum += a[i][j];
//			b[j] += a[i][j];
//		}
//		max0 = max(sum, max0);
//	}
//	sort(b, b+m);
//	max0 = max(max0, b[m-1]);
//	cout << max0 << endl; 
//	return 0;
//} 