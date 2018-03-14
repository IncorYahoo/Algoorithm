//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn=1010,maxm=1000010;
//struct node{
//	int s,t,w;
//}a[maxn];
//int f[maxm];
//bool cmp(const node&a,const node&b){
//	return a.t<b.t;
//}
//int main(){
//	int n,ans=-1;
//	cin>>n;
//	for(int i=1;i<=n;++i){
//		cin>>a[i].s>>a[i].t>>a[i].w;
//	}
//	sort(a+1,a+1+n,cmp);
//	int t=1;
//	for(int i=1;i<=maxm;++i){
//		if(i==a[t].t){
//			f[a[t].t]=max(f[a[t].t],f[a[t].s]+a[t].w);
//			ans=max(f[a[t].t],ans);
//			--i;
//			++t;
//			if(t>n)break;
//			continue;
//		}
//		f[i+1]=f[i];
//	}
//	cout<<ans;
//	return 0;
//}