//#include<iostream>
//
//using namespace std;
//
//int main()
//
//{
//
//	int i,j;
//
//	int v,n,a[100001];
//
//	int dp[100001];
//
//	cin>>v>>n;
//
//	for(i=1;i<=n;i++)
//
//		cin>>a[i];
//
//	for(i=1;i<=n;i++)
//
//		for(j=v;j>=a[i];j--)
//
//			dp[j] = max(dp[j-a[i]]+a[i],dp[j]);
//
//	//dp[j]=��ǰ����Ϊjʱ����ʢ�ſռ� 
//
//	cout<<v-dp[v]<<endl;
//
//	return 0;
//
//}