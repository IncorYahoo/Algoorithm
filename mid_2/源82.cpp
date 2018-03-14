//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//const int N = 1000001;
//typedef long long ll;
//ll a[N],b[N],c[N];
//int n,m;
//int main() 
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(0);
// 
//	while(cin>>n>>m)
//	{
//		memset(a,0,sizeof(a)/sizeof(a[0]));
//		memset(b,0,sizeof(b)/sizeof(b[0]));
//		memset(c,0,sizeof(c)/sizeof(c[0]));
//		f(i,1,n)cin>>a[i];
//		f(i,1,m)cin>>b[i];
//		int h=1,j=1,k=1;
//		h=1;
//
//		while(h<=n&&j<=m){
//			if(a[h]==b[j])
//			{
//				c[k++]=a[h];
//				h++;j++;
//			}
//			else if(a[h] > b[j])j++;
//			else h++;
//		}
//        if(k==1){
//			cout<<"empty"<<endl;
//			continue;
//		}
// 		f(i,1,k-2)cout<<c[i]<<" ";
//		cout<<c[k-1]; 
//        
//	} 
//	return 0;
//
//}