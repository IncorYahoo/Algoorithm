//#include<cstdio>
//#include<cstring>
//#include<cstdlib>
//#include<set>
//#include<ctime>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<map>
//#include<cmath>
//#define inf 1000000000
//#define pa pair<int,int>
//#define ll long long 
//using namespace std;
//ll read()
//{
//    ll x=0,f=1;char ch=getchar();
//    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
//    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
//    return x*f;
//}
//ll bin[65];
//int b[65];
//int n,ans;
//struct data{
//	ll a;int b;
//}a[1005];
//bool operator<(data a,data b)
//{
//	return a.b>b.b;
//}
//int main()
//{
//	bin[0]=1;for(int i=1;i<=63;i++)bin[i]=bin[i-1]<<1;
//	n=read();
//	for(int i=1;i<=n;i++)
//		a[i].a=read(),a[i].b=read();
//	sort(a+1,a+n+1);
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=63;j>=0;j--)
//			if(a[i].a&bin[j])
//			{
//				if(!b[j])
//				{
//					b[j]=i;break;
//				}
//				else a[i].a^=a[b[j]].a;
//			}
//		if(a[i].a)ans+=a[i].b;
//	}
//	printf("%d\n",ans);
//	return 0;
//}