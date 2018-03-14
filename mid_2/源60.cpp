//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//#define INF 0x7f 
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//#define mod 1000000007
//const int N = 2000000;
//ll jc[N+5]={1},inv[N+5]={1};
//ll Pow(ll a ,ll b); //a^b
//ll Cata(ll a ,ll b); //卡特兰数
//ll C( ll n ,ll m);
//
//int main(){
//	阶乘和逆元打表
//	f(i,1,2000001)
//		jc[i]=jc[i-1]*i%mod;
//	费马小定理
//	inv[2000001] = Pow(jc[2000001],mod-2);
//	g(i,N,1)
//		inv[i] = inv[i+1]*(i+1)%mod;
//	int t ; int n,m,k;
//	cin>>t;
//	while(t--){
//		cin>>n>>m>>k;
//		cout<<Cata(m-1,m-k)*Cata(n-(m-k),n-m)%mod<<endl;
//	}
//	return 0;
//}
// 
//ll Pow (ll a ,ll b){
//	ll  ans =1;
//	while(b){
//		if(b%2==1)
//			ans =ans*a%mod;
//		a=a*a%mod;
//		b>>=1;
//	}
//	return ans;
//}
//ll Cata(ll a ,ll b){
//	return (C(a+b,a)-C(a+b,a+1)+mod)%mod;
//}
//ll C( ll n ,ll m){
//	 return  n<m? 0:jc[n]*inv[m]%mod*inv[n-m]%mod;
//}
