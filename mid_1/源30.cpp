//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define FO(i,L,R) for(int i=L;i<=R;++i)
//#define FR(i,L,R) for(int i=L;i>=R;--i)
//const int maxn=1010,maxm=1000010;
//struct Node
//{
//	int l,r,w;
//}a[100005];
//
//int f[maxn];
//bool cmp(const Node & l,const Node& r)
//{
//	return l.r<r.r;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	FO(i,1,n)cin>>a[i].l>>a[i].r>>a[i].w;
//	sort(a+1,a+n+1,cmp);
//	int t=1;
//	int ans=0;
//
//	FO(i,1,maxm)
//	{
//			if(i==a[t].r)
//			{
//				f[a[t].r]=max(f[a[t].r],f[a[t].l]+a[t].w);
//			
//				ans =max(ans,f[a[t].r]);	
//				i--;
//				t++;
//				if(t>n)
//					break;
//			}
//			f[i+1]=f[i];
//	}
//	cout<<ans<<endl;
//}
