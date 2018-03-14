//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	char a[13][13];
//	char b [13][13];
//	int  c[9] ={0};
//
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			cin>>a[i][j];
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			cin>>b[i][j];
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//		{
//			 if(a[i][j]	== b[j][n-i+1])				c[1]++;
//			 if(a[i][j]	==b[n-i+1][n-j+1])			c[2]++;
//			 if(a[i][j] ==b[n-j+1][i])				c[3]++;
//			 if(a[i][j] ==b[i][n+1-j])				c[4]++;
//			 if(a[i][n+1-j]== b[j][n-i+1])			c[5]++;
//			 if(a[i][n+1-j]==b[n-i+1][n-j+1])		c[6]++;
//			 if(a[i][n+1-j]==b[n-j+1][i])			c[7]++;
//			 if(a[i][j]==b[i][j])					c[8]++;
//		}	
//	for(int i=1;i<9;i++)
//		if(c[i]==n*n)
//	 {
//        if(i<5) cout<<i;
//        else if(i==8) cout<<6;
//        else cout<<5;
//        return 0;
//	 }
//	cout<<7;
//
//
//	system("pause");
//	return 0;
//}