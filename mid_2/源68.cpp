//#include<iostream>
//using namespace std ;
//typedef long long ll ;
//#define f(i,l,r) for(int i=l;i<=r;++i)
//#define g(i,l,r) for(int i=l;i>=r;--i)
//  ll M = 1e9+7;
//ll gcd(ll a,ll b){
//    return b?gcd(b,a%b):a;
//}
//ll pow (ll a ,ll b){
//	ll  ans =1;
//	while(b){
//		if(b%2==1)
//			ans =ans*a%M;
//		a=a*a%M;
//		b>>=1;
//	}
//	return ans;
//}
//
//ll slove(ll n,ll m)
//{
//	ll ans=0;
//	if(m & 1) ans=m*pow(n,m/2+1)%M;
//	else ans=((m/2*pow(n,m/2))%M+(m/2*pow(n,m/2+1))%M)%M;
//	for(int i=0;i<m;++i) ans=(ans+pow(n,gcd(m,i)))%M;
//	ans =  ans*pow(m*2%M,M-2)%M ;
//	return ans ;
//} 
//
//int main(){
//	ll t ,a,b;
//	cin>>t ;
//	while(t--){
//		cin>>a>>b;
//		cout<<slove(a,b)<<endl;
//	} 
//	return 0;
//}
//
//
