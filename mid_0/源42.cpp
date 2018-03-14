//#include<iostream>
//using namespace std;
//int a[100000];
//
//int gcd(int a,int b)
//{
//	if(a<b) return gcd(b,a);
//	if(b==0) return a;
//	else
//		return gcd(b,a%b);
//}
//int ngcd(int * a,int n)
//{
//	if(n==1)return a[1];
//	else
//		return gcd(a[n],ngcd(a,n-1));
//}
//int lcm(int a,int b)
//{
//	return a*b/gcd(a,b);
//}
//int nlcm(int *a,int n)
//{
//	if(n==1) return a[1];
//	return lcm (a[n],nlcm(a,n-1));
//}
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//		cin>>a[i];
//	cout<<nlcm( a,  n)<<endl;
//
//
//	system("pause");
//	return 0;
//}