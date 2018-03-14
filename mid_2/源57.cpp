//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//const int N=2E6;
//const int MOD=998244353;
//int n,p,len,f[N],ans;
//char s[N];
//vector <char> G[N];
//
//int find(int k1,int k2)
//{
//	int j=0,m=G[k1].size(),n=G[k2].size(),sum=0;
//	for (int i=0;i<n;i++)
//	{
//		while (j&&G[k1][j] != G[k2][i]) j=f[j];
//		if (G[k1][j]==G[k2][i]) j++;
//		if (j==m) sum++;
//	}
//	return sum;
//}
//void getfail(int k)  // m=length s
//{
//	int m=G[k].size();
//	for (int i=1;i<m;i++)
//	{
//		int j=f[i];
//		while (j && G[k][i]!=G[k][j]) j=f[j];
//		f[i+1]=G[k][i]==G[k][j]?j+1:0;
//	}
//}
//
//int main()
//{
//	 
//	cin>>n;
//	p=1;
//	for (int i=1;i<=n;i++)
//	{
//		scanf("%s",s); len=strlen(s);
//		for (int j=0;j<len;j++) G[i].push_back(s[j]);
//		if (len<G[p].size()) p=i;
//	}
// 
//	ans=1;
//	for (int i=1;i<=n;i++)
//	{
//		getfail(p);
//		ans=(long long)ans*find(p,i)%MOD;
//	}
//	for (int i=1;i<=n;i++)
//		if (G[i].size()==G[p].size()) 
//			printf("%d\n",ans); 
//		else printf("0\n");
//}